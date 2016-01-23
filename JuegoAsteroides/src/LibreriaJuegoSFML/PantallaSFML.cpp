#include "PantallaSFML.h"

PantallaSFML::PantallaSFML(sf::RenderWindow* display)
{
    this->display = display;
}

PantallaSFML::~PantallaSFML()
{
}

bool PantallaSFML::crearPantalla()
{
    //display = new sf::RenderWindow(sf::VideoMode(600, 600), "Juego Asteroides");
    //display->clear(sf::Color::Black);
    return display->isOpen();
}

void PantallaSFML::destruirPantalla()
{
    (*display).close();
}

void PantallaSFML::pintarPantalla(Color color)
{
    sf::Color sfml_color(color.GetRed(), color.GetGreen(), color.GetBlue(), 255);
    display->clear(sfml_color);
}
