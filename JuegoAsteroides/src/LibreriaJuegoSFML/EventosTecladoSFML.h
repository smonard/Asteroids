#ifndef EVENTOSTECLADOSFML_H
#define EVENTOSTECLADOSFML_H

#include "../Base/EventosTeclado.hpp" // Base class: EventosTeclado
#include "SFML_API.hpp"
#include <unistd.h>

class EventosTecladoSFML : public EventosTeclado
{
    sf::RenderWindow  *display;
public:
    EventosTecladoSFML(sf::RenderWindow  *display) ;
    ~EventosTecladoSFML() ;
    void iniciarEscuchaEventos();
private:
    int convetirTecla(int teclaPresionada);
    void lanzarEventoTeclado();
    int leerTecla();
};

#endif // EVENTOSTECLADOSFML_H
