#include "EventosAllegro.h"



void EventosAllegro::iniciarEscuchaEventos(){
    sigueEscuchando = true;
    queue = al_create_event_queue(); 
    al_register_event_source(queue, al_get_keyboard_event_source());
    subProcesoEsperaEventos = new std::thread([&]() -> void {
        sleep(1);
        while(sigueEscuchando){
            al_wait_for_event(queue, &event);
            lanzarEventoTeclado();
        }
    });
}

void EventosAllegro::lanzarEventoTeclado(){
    int teclaPresionada = leerTecla();
    enTeclaPresionada(teclaPresionada);
}

int EventosAllegro::leerTecla(){
    int tecla = -1;
    if (event.type == ALLEGRO_EVENT_KEY_DOWN || event.type == ALLEGRO_EVENT_KEY_UP) { 
        tecla = event.keyboard.keycode;
    }
    return tecla;
}

void EventosAllegro::enTeclaPresionada(int teclaPresionda){
    for(std::list<Observador*>::const_iterator observador=listaObservadores.begin(); observador!=listaObservadores.end(); ++observador)
    {
        (*observador)->ejecutarEventoTeclado(teclaPresionda);
    }
}

void EventosAllegro::adjuntarObservador(Observador* observadorNuevo){
    listaObservadores.push_back(observadorNuevo);
}

EventosAllegro::~EventosAllegro()
{
    
}

EventosAllegro::EventosAllegro()
{
    iniciarEscuchaEventos();
}

