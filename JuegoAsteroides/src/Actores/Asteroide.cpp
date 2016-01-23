#include "Asteroide.h"

Asteroide::Asteroide(PosicionPantalla nposicion, Color * ncolor)
    :ObjetoGraficoInterfaz(nposicion,ncolor)
{
    variacion_orientacion = 0.0000002;
    velocidad = 1.5f;
}
const PosicionPantalla& Asteroide::obtenerPosicion() const
{
    return posicion;
}
void Asteroide::dibujarse()
{
    avanzar();
    graficador->aplicarTransformacion(posicion, orientacion);
    if(!destruido){
        orientacion += variacion_orientacion;
        dibujarseNormal();
    }
    else{
        dibujarseDestruido();
    }
}

void Asteroide::avanzar(){
    posicion.SetY(posicion.GetY() + velocidad);
}

void Asteroide::dibujarseNormal(){
    graficador->dibujarLinea(Linea( PosicionPantalla(-20, 20),  PosicionPantalla(-25, 5)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(-25, 5),  PosicionPantalla(-25, -10)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(-25, -10),  PosicionPantalla(-5, -10)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(-5, -10),  PosicionPantalla(-10, -20)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(-10, -20),  PosicionPantalla(5, -20)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(5, -20),  PosicionPantalla( 20, -10)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(20, -10),  PosicionPantalla( 20, -5)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(20, -5),  PosicionPantalla( 0, 0)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(0, 0),  PosicionPantalla( 20, 10)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(20, 10),  PosicionPantalla( 10, 20)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(10, 20),  PosicionPantalla( 0, 15)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(0, 15),  PosicionPantalla( -20, 20)), *color, 6.0f);
}

void Asteroide::dibujarseDestruido(){
    graficador->dibujarLinea(Linea( PosicionPantalla(-20, 20),  PosicionPantalla( -21, 21)), *color, 6.0f);
    graficador->dibujarLinea(Linea( PosicionPantalla(-25, 5),  PosicionPantalla( -24, 6)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(-25, -10),  PosicionPantalla( -26, -9)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(-5, -10),  PosicionPantalla( -6, -11)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(-10, -20),  PosicionPantalla( -9, -21)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(5, -20),  PosicionPantalla( 6, -21)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(20, -10),  PosicionPantalla( 21, -11)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(20, -5),  PosicionPantalla( 21, -6)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(0, 0),  PosicionPantalla( 1, 1)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(20, 10),  PosicionPantalla( 21, 11)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(10, 20),  PosicionPantalla( 11, 21)), *color, 6.0f); 
    graficador->dibujarLinea(Linea( PosicionPantalla(0, 15),  PosicionPantalla( 1, 16)), *color, 6.0f);
}

void Asteroide::destruirse()
{
    destruido = true;
}

bool Asteroide::esDeTipo(actorEnum tipoActor){
    return tipoActor == asteroide? true : false;
}

Asteroide::~Asteroide()
{
}

