#ifndef PANTALLA_HPP
#define PANTALLA_HPP

#include "Color.hpp"

class Pantalla
{
    
protected:
    int ancho_pantalla = 600;
    int alto_pantalla = 600;
    
public:
    
    int obtenerAlto() const
    {
        return alto_pantalla;
    }
    
    int obtenerAncho() const
    {
        return ancho_pantalla;
    }
    
    Pantalla()
    {
    }
    
    virtual bool crearPantalla() = 0;
    virtual void destruirPantalla() = 0;
    virtual void pintarPantalla(Color color) = 0;
    virtual ~Pantalla(){}

};

#endif // PANTALLA_HPP
