#ifndef LINEAPRUEBAS_HPP
#define LINEAPRUEBAS_HPP

#include <Linea.hpp>

SUITE(LineaPruebas)
  {
    struct Inicializacion
    {
        float x,y;
        Linea * linea ;
        PosicionPantalla * puntoInicio;
        PosicionPantalla* puntoFinal;
        
        Inicializacion() 
        {
            puntoInicio = new PosicionPantalla(rand() % 600, rand() % 600);
            puntoFinal = new PosicionPantalla(rand() % 600, rand() % 600);
            linea = new Linea(*puntoInicio, *puntoFinal);
        }

        ~Inicializacion()
        {
            delete linea;
            delete puntoFinal;
            delete puntoInicio;
        }
    };
    
    TEST_FIXTURE(Inicializacion, debeTenerPuntoInicial)
    {
        
        CHECK_EQUAL(linea->GetPuntoInicio().GetX(), puntoInicio->GetX());
        CHECK_EQUAL(linea->GetPuntoInicio().GetY(), puntoInicio->GetY());
    }

    TEST_FIXTURE(Inicializacion, debeTenerPuntoFinal)
    {
        CHECK_EQUAL(linea->GetPuntoInicio().GetX(), puntoInicio->GetX());
        CHECK_EQUAL(linea->GetPuntofin().GetY(), puntoFinal->GetY());
    }
  }

#endif // LINEAPRUEBAS_HPP
