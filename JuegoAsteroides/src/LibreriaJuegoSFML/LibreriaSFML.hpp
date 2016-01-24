#ifndef LIBRERIASFML_HPP
#define LIBRERIASFML_HPP

#include "GraficadorSFML.h"
#include "PantallaSFML.h"
#include "TipografiaSFML.h"
#include "EventosTecladoSFML.h"
#include "../LibreriaJuego.hpp"
#include "SFML_API.hpp"

class LibreriaSFML : public LibreriaJuego
{
public:


    LibreriaSFML()
    {
        printf("Instanciando SFML");
        PantallaSFML *displayF = new PantallaSFML();
        pantalla = displayF;
        pantalla->crearPantalla();
        graficador = new GraficadorSFML(displayF->getDisplay());
        tipografia = new TipografiaSFML();
        eventos = new EventosTecladoSFML(displayF->getDisplay());
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
