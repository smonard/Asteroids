#include "GraficadorSFML.h"

GraficadorSFML::GraficadorSFML(sf::RenderWindow  *display)
{
    this->display = display;
}

void GraficadorSFML::dibujarLinea(Linea linea, Color color, float grosor)
{
    sf::Vertex lineas[] =
        {
            sf::Vertex(sf::Vector2f(linea.GetPuntoInicio().GetX(), linea.GetPuntoInicio().GetY())),
            sf::Vertex(sf::Vector2f(linea.GetPuntofin().GetX(), linea.GetPuntofin().GetY() ))
        };
    display->draw(lineas, 3, sf::Lines);
    display->display();
}

void GraficadorSFML::aplicarTransformacion(PosicionPantalla posicion, float orientacion)
{
    
}
    

GraficadorSFML::~GraficadorSFML()
{
}

