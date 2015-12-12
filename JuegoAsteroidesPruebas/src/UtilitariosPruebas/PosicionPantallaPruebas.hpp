#ifndef POSICIONPANTALLAPRUEBAS_HPP
#define POSICIONPANTALLAPRUEBAS_HPP
#include <Posicion.hpp>

SUITE(PosicionPantallaPruebas)
  {
    struct Inicializacion
    {
        float x,y;
        PosicionPantalla * posicion;
        Inicializacion() 
        {
            x = rand() % 600;
            y = rand() % 600;
            posicion = new PosicionPantalla(x,y);
        }

        ~Inicializacion()
        {
            delete posicion;
        }
    };
    
    TEST_FIXTURE(Inicializacion, debeTenerX)
    {
        CHECK_EQUAL(posicion->GetX(), x);
    }

    TEST_FIXTURE(Inicializacion, debeTenerY)
    {
        CHECK_EQUAL(posicion->GetY(), y);
    }
  }

#endif // POSICIONPANTALLAPRUEBAS_HPP
