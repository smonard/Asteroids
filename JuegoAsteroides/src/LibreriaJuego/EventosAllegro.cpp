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
    return convetirTecla(tecla);
}

int EventosAllegro::convetirTecla(int teclaPresionada)
{
    switch(teclaPresionada) {
        case ALLEGRO_KEY_LEFT:
            return izquierda;
        break;
        case ALLEGRO_KEY_RIGHT:
            return derecha;
        break;
        case ALLEGRO_KEY_SPACE:
            return espacio;
        break;
        case ALLEGRO_KEY_ESCAPE:
            return esc;
        break;
        default : 
            return -1;
        break;
    }
}

EventosAllegro::~EventosAllegro()
{
    sigueEscuchando = false;
    subProcesoEsperaEventos->join();
    //delete queue;
}

EventosAllegro::EventosAllegro()
{
    iniciarEscuchaEventos();
}

