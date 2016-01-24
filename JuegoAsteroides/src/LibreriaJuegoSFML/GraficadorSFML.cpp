#include "GraficadorSFML.h"

GraficadorSFML::GraficadorSFML(sf::RenderWindow  *display)
{
    posicionRelativa = 0;
    this->display = display;
}

void GraficadorSFML::dibujarLinea(Linea linea, Color color, float grosor)
{
    float x = posicionRelativa->GetX();
    float y = posicionRelativa->GetY();
    sf::Vertex lineas[] =
        {
            sf::Vertex(sf::Vector2f(linea.GetPuntoInicio().GetX() + x, linea.GetPuntoInicio().GetY() + y)),
            sf::Vertex(sf::Vector2f(linea.GetPuntofin().GetX() + x, linea.GetPuntofin().GetY() +y ))
        };
    display->draw(lineas, 3, sf::Lines);
    display->display();
}

void GraficadorSFML::aplicarTransformacion(PosicionPantalla posicion, float orientacion)
{
    if(posicionRelativa != 0)
       delete posicionRelativa;
    posicionRelativa = new PosicionPantalla(posicion.GetX(), posicion.GetY());
}
    

GraficadorSFML::~GraficadorSFML()
{
    
}

