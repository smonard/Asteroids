#ifndef RAYOLASERPRUEBAS_HPP
#define RAYOLASERPRUEBAS_HPP
#include <Actores/RayoLaser.h>

SUITE(RayoLaserPruebas)
  {
    struct Inicializacion
    {
        RayoLaser* rayo;
        PosicionPantalla *posicion;
        float velocidad;
        Inicializacion() 
        {
            AllegroAPI::obtenerInstancia()->inicializarComponentesAllegro();
            velocidad = rand() % 100;
            posicion = new PosicionPantalla(rand() % 100, rand() % 100);
            rayo = new RayoLaser(*posicion, al_map_rgb(255,89,34));
            rayo->fijarVelocidad(velocidad);
        }

        ~Inicializacion()
        {
            if(rayo != NULL)
                delete rayo;
            if(posicion != NULL)
                delete posicion;
        }
    };
    
    TEST_FIXTURE(Inicializacion, debeTenerLaPosicionDada)
    {
        CHECK_EQUAL( rayo->obtenerPosicion().GetX(), posicion->GetX());
        CHECK_EQUAL( rayo->obtenerPosicion().GetY(), posicion->GetY());
    }

    TEST_FIXTURE(Inicializacion, debeCambiarLaPosicionCuandoSeAvanza)
    {
        float esperado = (*rayo).obtenerPosicion().GetY() - velocidad;
        (*rayo).avanzar();
        float actual = ((*rayo).obtenerPosicion().GetY());
        CHECK_EQUAL( actual, esperado);
    }
    
    TEST_FIXTURE(Inicializacion, debeSerRayoLaser)
    {
        bool esperado = true;
        bool actual = (*rayo).esDeTipo(rayoLaser);
        CHECK_EQUAL( actual, esperado);
    }
  }


#endif // RAYOLASERPRUEBAS_HPP
