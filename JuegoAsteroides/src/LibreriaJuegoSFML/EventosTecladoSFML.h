#ifndef EVENTOSTECLADOSFML_H
#define EVENTOSTECLADOSFML_H

#include "EventosTeclado.hpp" // Base class: EventosTeclado

class EventosTecladoSFML : public EventosTeclado
{
public:
    EventosTecladoSFML();
    ~EventosTecladoSFML();

public:
    virtual
void adjuntarObservador(Observador* observadorNuevo);
    virtual
void enTeclaPresionada(int teclaPresionada);
};

#endif // EVENTOSTECLADOSFML_H
