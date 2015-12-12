#ifndef FABRICAOBJETOSGRAFICOSPRUEBAS_HPP
#define FABRICAOBJETOSGRAFICOSPRUEBAS_HPP

#include <Actores/FabricaObjetoGrafica.h>
#include <Base/AllegroAPI.h>


SUITE(FabricaObjetoGraficaPruebas)
  {
    struct Inicializacion
    {
        FabricaObjetoGrafica* fabrica;
        Inicializacion() 
        {
            AllegroAPI::obtenerInstancia()->inicializarComponentesAllegro();
            fabrica = FabricaObjetoGrafica::obtenerInstancia();
        }

        ~Inicializacion()
        {
            if(fabrica != NULL)
                FabricaObjetoGrafica::liberarse();
        }
    };
    
    TEST_FIXTURE(Inicializacion, debeCrearAsteroide)
    {
        bool esperado = true;
        ObjetoGraficoInterfaz* asteroide_obj = fabrica->crearObjetoVisual(asteroide, PosicionPantalla(20,20), al_map_rgb(120,40,40));
        bool actual = dynamic_cast<Asteroide*> ((asteroide_obj )) != NULL;
        CHECK_EQUAL(actual, esperado);
    }
    
    TEST_FIXTURE(Inicializacion, debeCrearNaveEspacial)
    {
        bool esperado = true;
        ObjetoGraficoInterfaz* asteroide_obj = fabrica->crearObjetoVisual(naveEspacial, PosicionPantalla(20,20), al_map_rgb(120,40,40));
        bool actual = dynamic_cast<NaveEspacial*> ((asteroide_obj )) != NULL;
        CHECK_EQUAL(actual, esperado);
    }
    
    TEST_FIXTURE(Inicializacion, debeCrearRayoLaser)
    {
        bool esperado = true;
        ObjetoGraficoInterfaz* asteroide_obj = fabrica->crearObjetoVisual(rayoLaser, PosicionPantalla(20,20), al_map_rgb(120,40,40));
        bool actual = dynamic_cast<RayoLaser*> ((asteroide_obj )) != NULL;
        CHECK_EQUAL(actual, esperado);
    }


    
  }


#endif // FABRICAOBJETOSGRAFICOSPRUEBAS_HPP
