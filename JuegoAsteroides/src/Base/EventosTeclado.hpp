#ifndef EVENTOSTECLADO_HPP
#define EVENTOSTECLADO_HPP

#include "../Utilitarios/Sujeto.hpp" // Base class: Sujeto
#include <stdio.h>
#include <thread>


class EventosTeclado : public Sujeto
{    
protected:

    bool sigueEscuchando;
    std::thread* subProcesoEsperaEventos;

public:
    virtual void iniciarEscuchaEventos(){}
    void enTeclaPresionada(int teclaPresionada)
    {
        if(teclaPresionada != -1)
            for(std::list<Observador*>::const_iterator observador=listaObservadores.begin(); observador!=listaObservadores.end(); ++observador)
            {
                (*observador)->ejecutarEventoTeclado(teclaPresionada);
            }
    }
    void adjuntarObservador(Observador* observadorNuevo)
    {
        listaObservadores.push_back(observadorNuevo);
    }

protected:
    virtual void lanzarEventoTeclado()= 0;
    virtual int leerTecla() = 0;
};



enum teclaPresionadaEnum 
{ 
    espacio = 0,
    derecha = 1,
    izquierda = 2,
    esc = 3
};



#endif // EVENTOSTECLADO_HPP
