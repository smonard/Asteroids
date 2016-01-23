#ifndef PANTALLASFML_H
#define PANTALLASFML_H

#include "SFML_API.hpp"
#include "../ClasesDominio/Color.hpp"
#include "../ClasesDominio/Pantalla.hpp"
#include "../ClasesDominio/Tipografia.hpp"
#include "../ClasesDominio/Graficador.hpp"
#include "../Linea.hpp"

class PantallaSFML : public Pantalla
{
private:
    sf::RenderWindow* display;

public:
    PantallaSFML(sf::RenderWindow* display);
    ~PantallaSFML();
    bool crearPantalla();
    void destruirPantalla();
    void pintarPantalla(Color color);
    sf::RenderWindow* getDisplay() const
    {
        return display;
    }
};

#endif // PANTALLASFML_H
