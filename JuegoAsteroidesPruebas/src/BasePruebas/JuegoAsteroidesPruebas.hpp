#ifndef JUEGOASTEROIDESPRUEBAS_HPP
#define JUEGOASTEROIDESPRUEBAS_HPP
#include <Base/JuegoAsteroides.h>
#include <Actores/FabricaObjetoGrafica.h>
#include <Posicion.hpp>

SUITE(JuegoAsteroidesPruebas)
  {
    struct Inicializacion
    {
        JuegoAsteroides* juego;
        Inicializacion() 
        {
            AllegroAPI::obtenerInstancia()->inicializarComponentesAllegro();
            juego = new JuegoAsteroides();
        }

        ~Inicializacion()
        {
            if(juego != NULL)
                delete juego;
        }
    };
    
   
    
  }


#endif // JUEGOASTEROIDESPRUEBAS_HPP
