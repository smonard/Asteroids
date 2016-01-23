#ifndef LIBRERIAJUEGO_HPP
#define LIBRERIAJUEGO_HPP

#include "ClasesDominio/Graficador.hpp"
#include "ClasesDominio/Pantalla.hpp"
#include "ClasesDominio/Tipografia.hpp"

class LibreriaJuego
{
protected:
    Graficador* graficador;
    Tipografia* tipografia;
    Pantalla* pantalla;
    bool inicializado = false;

public:
    LibreriaJuego()
    {
    }
    
    virtual bool init() = 0;
    
    Graficador* GetGraficador()
    {
        return graficador;
    }
    Pantalla* GetPantalla()
    {
        return pantalla;
    }
    Tipografia* GetTipografia()
    {
        return tipografia;
    }
    virtual ~LibreriaJuego()
    {
    }
};

#endif // LIBRERIAJUEGO_HPP
