#ifndef GRAFICADOR_HPP
#define GRAFICADOR_HPP

#include "Color.hpp"
#include "../Linea.hpp"

class Graficador
{
    
public:

    
    Graficador() {}
    
    virtual void dibujarLinea(Linea linea, Color color, float grosor) = 0;
    virtual void aplicarTransformacion(PosicionPantalla posicion, float orientacion) = 0;
    virtual ~Graficador(){}

};

#endif // GRAFICADOR_HPP
