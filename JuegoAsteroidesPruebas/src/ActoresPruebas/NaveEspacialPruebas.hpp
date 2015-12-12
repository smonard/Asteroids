#ifndef NAVEESPACIALPRUEBAS_HPP
#define NAVEESPACIALPRUEBAS_HPP

#include <Actores/NaveEspacial.h>

SUITE(NaveEspacialPruebas)
  {
    struct Inicializacion
    {
        NaveEspacial* nave;
        PosicionPantalla *posicion;
        float velocidad;
        Inicializacion() 
        {
            AllegroAPI::obtenerInstancia()->inicializarComponentesAllegro();
            velocidad = rand() % 100;
            posicion = new PosicionPantalla(rand() % 100, rand() % 100);
            nave = new NaveEspacial(*posicion, al_map_rgb(255,89,34));
            nave->fijarVelocidad(velocidad);
        }

        ~Inicializacion()
        {
            if(nave != NULL)
                delete nave;
            if(posicion != NULL)
                delete posicion;
        }
    };
    
    TEST_FIXTURE(Inicializacion, debeTenerLaPosicionDada)
    {
        CHECK_EQUAL( nave->obtenerPosicion().GetX(), posicion->GetX());
        CHECK_EQUAL( nave->obtenerPosicion().GetY(), posicion->GetY());
    }

    TEST_FIXTURE(Inicializacion, debeCambiarLaPosicionCuandoVaAlaIzquierda)
    {
        float esperado = (*nave).obtenerPosicion().GetX() - velocidad;
        (*nave).irIzquierda();
        float actual = ((*nave).obtenerPosicion().GetX());
        CHECK_EQUAL( actual, esperado);
    }
    
    
    TEST_FIXTURE(Inicializacion, debeCambiarLaPosicionCuandoVaAlaDerecha)
    {
        float esperado = (*nave).obtenerPosicion().GetX() + velocidad;
        (*nave).irDerecha();
        float actual = ((*nave).obtenerPosicion().GetX());
        CHECK_EQUAL( actual, esperado);
    }
    
    TEST_FIXTURE(Inicializacion, debeGenerarUnRayoAlDisparar)
    {
        bool esperado = true;
        ObjetoGraficoInterfaz* rayo = (*nave).disparar();
        bool actual = rayo->esDeTipo(rayoLaser);
        delete rayo;
        CHECK_EQUAL( actual, esperado);
    }
    
    TEST_FIXTURE(Inicializacion, debeSerNaveEspacial)
    {
        bool esperado = true;
        bool actual = (*nave).esDeTipo(naveEspacial);
        CHECK_EQUAL( actual, esperado);
    }
  }


#endif // NAVEESPACIALPRUEBAS_HPP
