//#ifndef EVENTOSALLEGRO_H
//#define EVENTOSALLEGRO_H
#include "AllegroAPI.hpp"
#include "../Utilitarios/Sujeto.hpp"
#include <stdio.h>
#include <thread>

class EventosAllegro : public Sujeto
{
    ALLEGRO_EVENT_QUEUE* queue;
    ALLEGRO_EVENT event;
    bool sigueEscuchando;
    std::thread* subProcesoEsperaEventos;
    

public:
    EventosAllegro();
    void iniciarEscuchaEventos();
    ~EventosAllegro();
    virtual void enTeclaPresionada(int teclaPresionada);
    virtual void adjuntarObservador(Observador* observadorNuevo);

private:
    void lanzarEventoTeclado();
    int leerTecla();
};

//#endif // EVENTOSALLEGRO_H
