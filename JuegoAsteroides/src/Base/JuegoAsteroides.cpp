#include "JuegoAsteroides.h"
#include <stdio.h>
#include <stdlib.h>


bool JuegoAsteroides::getSigueEjecutando(){
    return sigueEjecutando;
}

JuegoAsteroides::JuegoAsteroides(){
    eventosAllegro = new EventosAllegro();
    eventosAllegro->adjuntarObservador(this);
    gestorMensajes = new GestorMensajes();
    PosicionPantalla posicionNave(AllegroAPI::obtenerInstancia()->obtenerAncho() / 2,AllegroAPI::obtenerInstancia()->obtenerAlto()-20);
    fabricaActores = FabricaObjetoGrafica::obtenerInstancia();
    naveEspacialActual =  (NaveEspacial*)fabricaActores->crearObjetoVisual(naveEspacial, posicionNave, AllegroAPI::obtenerInstancia()->obtenerColor(0,150,0));
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
        while(sigueEjecutando){
            usleep(frecuenciaCreacionAsteroides);
            nave_mutex.lock();
            lista_actores.push_back(fabricaActores->crearObjetoVisual(asteroide, PosicionPantalla(rand() % AllegroAPI::obtenerInstancia()->obtenerAncho(),20.0), AllegroAPI::obtenerInstancia()->obtenerColor(0,255,255)));
            nave_mutex.unlock();
        }
    });
}

void JuegoAsteroides::iniciarJuego(){
    sigueEjecutando = true;
    iniciarCreacionAsteroides();
    iniciarMetricas();
    buclePrincipal();
}

void JuegoAsteroides::buclePrincipal(){
    while(sigueEjecutando)
    {
        usleep(frecuenciaActualizacionPantalla);
        nave_mutex.lock();
        actualizarObjetosVisuales();
        nave_mutex.unlock();
        al_flip_display();
    }
}

void JuegoAsteroides::ejecutarEventoTeclado(int teclaPresionada){
    switch(teclaPresionada) {
        case ALLEGRO_KEY_LEFT:
            (*naveEspacialActual).irIzquierda();
        break;
        case ALLEGRO_KEY_RIGHT:
            (*naveEspacialActual).irDerecha();
        break;
        case ALLEGRO_KEY_SPACE:
            lista_actores.push_back((*naveEspacialActual).disparar());
        break;
        default :
        break;
    }
}



 void JuegoAsteroides::actualizarObjetosVisuales(){
    borrarPantalla();
    string texto = "Puntaje:" + std::to_string(puntaje);
    //str.append(std::to_string(puntaje)).c_str();
    gestorMensajes->dibujarTexto(texto, PosicionPantalla(10,10));
    for(std::list<ObjetoGraficoInterfaz*>::const_iterator objetoVisual=lista_actores.begin(); objetoVisual!=lista_actores.end(); ++objetoVisual)
    {
        (*objetoVisual)->dibujarse();
        if((*objetoVisual)->estaFueraDeLaPantalla()){
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
                    PosicionPantalla(AllegroAPI::obtenerInstancia()->obtenerAncho() / 2,AllegroAPI::obtenerInstancia()->obtenerAlto() - 20), 
                    AllegroAPI::obtenerInstancia()->obtenerColor(0 + puntaje,25,255));
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

bool JuegoAsteroides::estaTocadoPorRayo(ObjetoGraficoInterfaz* asteroide){
    for(std::list<ObjetoGraficoInterfaz*>::const_iterator iterador=lista_actores.begin(); iterador!=lista_actores.end(); ++iterador)
    {
        if((*iterador)->esDeTipo(rayoLaser) && (*iterador)->estaEnPosicionSimilarCon(asteroide) && !((Asteroide*)asteroide)->estaDestruido())
            return true;
    }
    return false;
}

void JuegoAsteroides::borrarPantalla(){
    al_clear_to_color(AllegroAPI::obtenerInstancia()->obtenerColor(255,255,255));
}

void JuegoAsteroides::detenerJuego(){
    sigueEjecutando=false;
    borrarPantalla();
}

JuegoAsteroides::~JuegoAsteroides(){
    delete eventosAllegro;
    fabricaActores->liberarse();
    delete naveEspacialActual;
}

