#ifndef EVENTOSALLEGRO_H
#define EVENTOSALLEGRO_H

#include "../Base/AllegroAPI.hpp"

#include "../Base/EventosTeclado.hpp" // Base class: EventosTeclado

class EventosAllegro : public EventosTeclado
{
    ALLEGRO_EVENT_QUEUE* queue;
    ALLEGRO_EVENT event;

public:
    EventosAllegro();
    void iniciarEscuchaEventos();
    ~EventosAllegro();

private:
    int convetirTecla(int teclaPresionada);
    void lanzarEventoTeclado();
    int leerTecla();
};


#endif // EVENTOSALLEGRO_H
