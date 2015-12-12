#ifndef ASTEROIDEPRUEBAS_HPP
#define ASTEROIDEPRUEBAS_HPP

#include <Actores/Asteroide.h>
#include <Base/AllegroAPI.h>


SUITE(AsteroidePruebas)
  {
    struct Inicializacion
    {
        Asteroide* asteroide_obj;
        PosicionPantalla *posicion;
        float velocidad;
        Inicializacion() 
        {
            AllegroAPI::obtenerInstancia()->inicializarComponentesAllegro();
            velocidad = rand() % 100;
            posicion = new PosicionPantalla(rand() % 100, rand() % 100);
            asteroide_obj = new Asteroide(*posicion, al_map_rgb(255,89,34));
            asteroide_obj->fijarVelocidad(velocidad);
        }

        ~Inicializacion()
        {
            if(asteroide_obj != NULL)
                delete asteroide_obj;
            if(posicion != NULL)
                delete posicion;
        }
    };
    
    TEST_FIXTURE(Inicializacion, debeTenerLaPosicionDada)
    {
        CHECK_EQUAL( asteroide_obj->obtenerPosicion().GetX(), posicion->GetX());
        CHECK_EQUAL( asteroide_obj->obtenerPosicion().GetY(), posicion->GetY());
    }

    TEST_FIXTURE(Inicializacion, debeCambiarLaPosicionCuandoAnvanza)
    {
        float esperado = (*asteroide_obj).obtenerPosicion().GetY() + velocidad;
        (*asteroide_obj).avanzar();
        float actual = ((*asteroide_obj).obtenerPosicion().GetY());
        CHECK_EQUAL( actual, esperado);
    }
    
    TEST_FIXTURE(Inicializacion, debeCambiarCambiarVariableDestruido)
    {
        bool esperado = true;
        (*asteroide_obj).destruirse();
        bool actual = (*asteroide_obj).estaDestruido();
        CHECK_EQUAL( actual, esperado);
    }
    
    TEST_FIXTURE(Inicializacion, debeSerAsteroide)
    {
        bool esperado = true;
        bool actual = (*asteroide_obj).esDeTipo(asteroide);
        CHECK_EQUAL( actual, esperado);
    }
    
  }


#endif // ASTEROIDEPRUEBAS_HPP
