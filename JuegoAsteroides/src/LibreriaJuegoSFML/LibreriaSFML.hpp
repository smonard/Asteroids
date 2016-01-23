#ifndef LIBRERIASFML_HPP
#define LIBRERIASFML_HPP

#include "GraficadorSFML.h"
#include "PantallaSFML.h"
#include "TipografiaSFML.h"
#include "../LibreriaJuego.hpp"
#include "SFML_API.hpp"

class LibreriaSFML : public LibreriaJuego
{
public:


    LibreriaSFML(sf::RenderWindow* display)
    {
        printf("Instanciando SFML");
        PantallaSFML *displayF = new PantallaSFML(display);
        graficador = new GraficadorSFML(displayF->getDisplay());
        tipografia = new TipografiaSFML();
        pantalla = displayF;
    }
    
    bool init()
    {
        return true;
    }
    
    ~LibreriaSFML()
    {
        delete graficador;
        delete tipografia;
        delete pantalla;
    }

};

#endif // LIBRERIASFML_HPP
