#include "NaveEspacial.h"



NaveEspacial::NaveEspacial(PosicionPantalla nposicion, ALLEGRO_COLOR ncolor)
    :ObjetoGraficoInterfaz(nposicion,ncolor)
{
    variacion_orientacion = 0.0000002;
    velocidad = 10;
}


void NaveEspacial::dibujarse()
{
    AllegroAPI::obtenerInstancia()->aplicarTransformacion(posicion, orientacion);
    AllegroAPI::obtenerInstancia()->dibujarLinea(Linea( PosicionPantalla(-8, 9),  PosicionPantalla(0, -11)), color, 4.0f); 
    AllegroAPI::obtenerInstancia()->dibujarLinea(Linea( PosicionPantalla(0, -11),  PosicionPantalla( 8, 9)), color, 4.0f); 
    AllegroAPI::obtenerInstancia()->dibujarLinea(Linea( PosicionPantalla(-6, 4),  PosicionPantalla(-1, 4)), color, 4.0f); 
    AllegroAPI::obtenerInstancia()->dibujarLinea(Linea( PosicionPantalla(6, 4),  PosicionPantalla( 1, 4)), color, 4.0f);
}

const PosicionPantalla& NaveEspacial::obtenerPosicion() const
{
    return posicion;
}

void NaveEspacial::irIzquierda(){
    posicion.SetX(posicion.GetX() - velocidad);
}

void NaveEspacial::irDerecha(){
    posicion.SetX(posicion.GetX() + velocidad);
}



ObjetoGraficoInterfaz* NaveEspacial::disparar()
{
    ALLEGRO_COLOR color_rojo = al_map_rgb(255,0,0);
    ObjetoGraficoInterfaz* rayo = FabricaObjetoGrafica::obtenerInstancia()->crearObjetoVisual(rayoLaser, posicion, color_rojo);
    return rayo;
}

bool NaveEspacial::esDeTipo(actorEnum tipoActor){
    return tipoActor == naveEspacial? true : false;
}

NaveEspacial::~NaveEspacial()
{
}

