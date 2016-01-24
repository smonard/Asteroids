#ifndef LIBRERIAJUEGO_HPP
#define LIBRERIAJUEGO_HPP

#include "ClasesDominio/Graficador.hpp"
#include "ClasesDominio/Pantalla.hpp"
#include "ClasesDominio/Tipografia.hpp"
#include "Base/EventosTeclado.hpp"

class LibreriaJuego
{
protected:
    Graficador* graficador;
    Tipografia* tipografia;
    Pantalla* pantalla;
    EventosTeclado* eventos;
    bool inicializado = false;

public:
    LibreriaJuego()
    {
    }
    
    virtual bool init() = 0;
    EventosTeclado* GetControladorEvents()
    {
        return eventos;
    }
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
