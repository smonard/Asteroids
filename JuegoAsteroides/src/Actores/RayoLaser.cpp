#include "RayoLaser.h"

RayoLaser::RayoLaser(PosicionPantalla nposicion, ALLEGRO_COLOR ncolor)
    :ObjetoGraficoInterfaz(nposicion,ncolor)
{
    variacion_orientacion = 0.0000002;
    velocidad = 4;
}

void RayoLaser::avanzar(){
    posicion.SetY(posicion.GetY() - velocidad);
}

RayoLaser::~RayoLaser()
{
    
}

const PosicionPantalla& RayoLaser::obtenerPosicion() const
{
    return posicion;
}

void RayoLaser::dibujarse()
{
    avanzar();
    AllegroAPI::obtenerInstancia()->aplicarTransformacion(posicion,orientacion);
    AllegroAPI::obtenerInstancia()->dibujarLinea(Linea(PosicionPantalla(0,9), PosicionPantalla(0,-11)), color , 4.0f);
}

bool RayoLaser::esDeTipo(actorEnum tipoActor){
    return tipoActor == rayoLaser? true : false;
}