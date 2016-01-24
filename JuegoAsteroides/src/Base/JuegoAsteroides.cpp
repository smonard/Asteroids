#include "JuegoAsteroides.h"


bool JuegoAsteroides::getSigueEjecutando(){
    return sigueEjecutando;
}

JuegoAsteroides::JuegoAsteroides(LibreriaJuego* core){
    pantalla = core->GetPantalla();
    graficador = core->GetGraficador();
    eventosHW = core->GetControladorEvents();
    eventosHW->adjuntarObservador(this);
    PosicionPantalla posicionNave(pantalla->obtenerAncho() / 2,pantalla->obtenerAlto()-20);
    fabricaActores = FabricaObjetoGrafica::obtenerInstancia();
    Color *color = new Color(0,150,0);
    naveEspacialActual =  (NaveEspacial*)fabricaActores->crearObjetoVisual(naveEspacial, posicionNave,color);
    naveEspacialActual->fijarGraficador(graficador);
    lista_actores={};   
    lista_actores.push_back(naveEspacialActual);
}

void JuegoAsteroides::iniciarMetricas(){
    subProcesoMetricas = new std::thread([&]() -> void {
        while(sigueEjecutando){
            sleep(1);
            system("clear");
            printf("Número de objs: %lu\n", lista_actores.size());
            printf("Puntaje: %lu\n", puntaje);
        }
    });
}

void JuegoAsteroides::iniciarCreacionAsteroides() {
    subProcesoCreacionAsteoides = new std::thread([&]()-> void {
        actorEnum actor_asteroide = asteroide;
        Color *color = new Color(0,255,255);
        while(sigueEjecutando){
            usleep(frecuenciaCreacionAsteroides);
            nave_mutex.lock();
            lista_actores.push_back(
                (ObjetoGraficoInterfaz*)((fabricaActores->crearObjetoVisual(asteroide, PosicionPantalla(rand() % pantalla->obtenerAncho(),20.0), color))->fijarGraficador(graficador))
                );
            nave_mutex.unlock();
        }
    });
}

void JuegoAsteroides::iniciarJuego(){
    sigueEjecutando = true;
    iniciarCreacionAsteroides();
    //iniciarMetricas();
    buclePrincipal();
}

void JuegoAsteroides::buclePrincipal(){
    while(sigueEjecutando)
    {
        usleep(frecuenciaActualizacionPantalla);
        nave_mutex.lock();
        actualizarObjetosVisuales();
        nave_mutex.unlock();
        //eventosHW->iniciarEscuchaEventos();
    }
}

void JuegoAsteroides::ejecutarEventoTeclado(int teclaPresionada){
   switch(teclaPresionada) {
        case izquierda:
            (*naveEspacialActual).irIzquierda();
        break;
        case derecha:
            (*naveEspacialActual).irDerecha();
        break;
        case espacio:
            lista_actores.push_back((*naveEspacialActual).disparar());
        break;
        case esc:
            sigueEjecutando = false;
        break;
        default :
        break;
    }
}

void JuegoAsteroides::actualizarObjetosVisuales(){
    borrarPantalla();
    string texto = "Puntaje:" + std::to_string(puntaje);
    //gestorMensajes->dibujarTexto(texto, PosicionPantalla(10,10));
    for(std::list<ObjetoGraficoInterfaz*>::const_iterator objetoVisual=lista_actores.begin(); objetoVisual!=lista_actores.end(); ++objetoVisual)
    {
        Color* color = new Color(0 + puntaje,150,0);
        (*objetoVisual)->dibujarse();
        if((*objetoVisual)->estaFueraDeLaPantalla(pantalla->obtenerAlto())){
            destruirObjeto(*objetoVisual); 
            break; 
        }
        if((*objetoVisual)->esDeTipo(asteroide)){
            if(estaTocadoPorRayo(*objetoVisual)){
                ((Asteroide*)*objetoVisual)->destruirse(); 
                puntaje++;
            }
            if(naveEspacialActual->estaEnPosicionSimilarCon(*objetoVisual) && !((Asteroide*)(*objetoVisual))->estaDestruido()){
                destruirObjeto(naveEspacialActual);
                naveEspacialActual = (NaveEspacial*)fabricaActores->crearObjetoVisual(naveEspacial,
                    PosicionPantalla(pantalla->obtenerAncho() / 2, pantalla->obtenerAlto() - 20),
                    (
                    color
                    ));
                naveEspacialActual->fijarGraficador(graficador);
                lista_actores.push_back(naveEspacialActual);
                break; 
            }
        }
    } 
}

void JuegoAsteroides::destruirObjeto(ObjetoGraficoInterfaz* objetoAdestruir){
    lista_actores.remove(objetoAdestruir);
    delete objetoAdestruir;
}

void JuegoAsteroides::destruirObjetos(){
    while(lista_actores.size() > 0){
        for(std::list<ObjetoGraficoInterfaz*>::const_iterator iterador=lista_actores.begin(); iterador!=lista_actores.end(); ++iterador)
        {
            destruirObjeto(*iterador);
            break;
        }
    }
}

bool JuegoAsteroides::estaTocadoPorRayo(ObjetoGraficoInterfaz* asteroide){
    for(std::list<ObjetoGraficoInterfaz*>::const_iterator iterador=lista_actores.begin(); iterador!=lista_actores.end(); ++iterador)
    {
        if((*iterador)->esDeTipo(rayoLaser) && (*iterador)->estaEnPosicionSimilarCon(asteroide) && !((Asteroide*)asteroide)->estaDestruido())
            return true;
    }
    return false;
}

void JuegoAsteroides::borrarPantalla(){
    Color* color = new Color(0,0,0);
    pantalla->pintarPantalla(*color);
}

void JuegoAsteroides::detenerJuego(){
    sigueEjecutando=false;
    borrarPantalla();
}

JuegoAsteroides::~JuegoAsteroides(){
    subProcesoCreacionAsteoides->join();
    fabricaActores->liberarse();
    //delete gestorMensajes;
    destruirObjetos();
}

