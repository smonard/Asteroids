#include "PantallaSFML.h"

PantallaSFML::PantallaSFML()
{
    
}

PantallaSFML::~PantallaSFML()
{
}

bool PantallaSFML::crearPantalla()
{
    display = new sf::RenderWindow(sf::VideoMode(600, 600), "Juego Asteroides");
    display->clear(sf::Color::Black);
    return display->isOpen();
}

void PantallaSFML::destruirPantalla()
{
    (*display).close();
}

void PantallaSFML::pintarPantalla(Color color)
{
     display->clear();
    sf::Color sfml_color(color.GetRed(), color.GetGreen(), color.GetBlue(), 255);
    display->clear(sfml_color);
}
