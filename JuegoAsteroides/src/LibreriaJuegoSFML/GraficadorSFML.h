#ifndef GRAFICADORSFML_H
#define GRAFICADORSFML_H

#include "SFML_API.hpp"
#include "PantallaSFML.h"
#include "../ClasesDominio/Color.hpp"
#include "../ClasesDominio/Pantalla.hpp"
#include "../ClasesDominio/Tipografia.hpp"
#include "../ClasesDominio/Graficador.hpp"
#include "../Linea.hpp"

class GraficadorSFML : public Graficador
{
private:
    sf::RenderWindow  *display;
public:
    GraficadorSFML(sf::RenderWindow  *display);
    void dibujarLinea(Linea linea, Color color, float grosor) ;
    void aplicarTransformacion(PosicionPantalla posicion, float orientacion);
    ~GraficadorSFML();
};

#endif // GRAFICADORSFML_H
