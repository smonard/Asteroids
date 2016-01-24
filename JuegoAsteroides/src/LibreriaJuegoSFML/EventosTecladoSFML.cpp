#include "EventosTecladoSFML.h"

void EventosTecladoSFML::iniciarEscuchaEventos()
{
    sigueEscuchando = true;
    //subProcesoEsperaEventos = new std::thread([&]() -> void {
        //sleep(5);
        sf::Event event;
        if (display->waitEvent(event) )//|| sigueEscuchando)
        //{
            if(event.type == sf::Event::KeyPressed)
                lanzarEventoTeclado();
        //}
    //});
}

int EventosTecladoSFML::convetirTecla(int teclaPresionada)
{
    
}

void EventosTecladoSFML::lanzarEventoTeclado()
{
    printf("enviando event");
    int teclaPresionada = leerTecla();
    enTeclaPresionada(teclaPresionada);
}

int EventosTecladoSFML::leerTecla()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        return izquierda;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        return derecha;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        return espacio;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
        sigueEscuchando = false;
        return esc;}
    return -1;
}


EventosTecladoSFML::~EventosTecladoSFML()
{
    sigueEscuchando = false;
    subProcesoEsperaEventos->join();
    //delete queue;
}

EventosTecladoSFML::EventosTecladoSFML(sf::RenderWindow  *display)
{
    this->display = display;
    //iniciarEscuchaEventos();
}
