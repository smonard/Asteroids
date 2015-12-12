#ifndef OBJETOGRAFICOPRUEBAS_HPP
#define OBJETOGRAFICOPRUEBAS_HPP


SUITE(ObjetoGraficoPruebas)
  {
    struct Inicializacion
    {
        ObjetoGraficoInterfaz* obj_grafico;
        Inicializacion() 
        {
            AllegroAPI::obtenerInstancia()->inicializarComponentesAllegro();
        }

        ~Inicializacion()
        {
            if(obj_grafico != NULL)
                delete obj_grafico;
        }
    };
    
    TEST_FIXTURE(Inicializacion, debeTenerLaPosicionDada)
    {
        PosicionPantalla posicion(400,300);
        obj_grafico = new ObjetoGraficoInterfaz(posicion, al_map_rgb(255,89,34));
        CHECK_EQUAL( obj_grafico->obtenerPosicion().GetX(), posicion.GetX());
        CHECK_EQUAL( obj_grafico->obtenerPosicion().GetY(), posicion.GetY());
    }

     TEST_FIXTURE(Inicializacion, debeEstarFueraDePantalla)
    {
        PosicionPantalla posicion(1000,1000);
        obj_grafico = new ObjetoGraficoInterfaz(posicion, al_map_rgb(255,89,34));
        bool actual = obj_grafico->estaFueraDeLaPantalla();
        CHECK_EQUAL(actual, true);
    }

    TEST_FIXTURE(Inicializacion, debeEstarDentroDePantalla)
    {
        PosicionPantalla posicion(100,100);
        obj_grafico = new ObjetoGraficoInterfaz(posicion, al_map_rgb(255,89,34));
        bool actual = obj_grafico->estaFueraDeLaPantalla();
        CHECK_EQUAL(actual, false);
    }
    
    TEST_FIXTURE(Inicializacion, debeEstarEnPosicionDiferente)
    {
        PosicionPantalla posicion(100,100);
        PosicionPantalla posicion2(140,150);
        obj_grafico = new ObjetoGraficoInterfaz(posicion, al_map_rgb(255,89,34));
        ObjetoGraficoInterfaz* objetoVisual2 = FabricaObjetoGrafica::obtenerInstancia()->crearObjetoVisual(rayoLaser, posicion2,al_map_rgb(2,2,2));;
        bool actual = (obj_grafico->estaEnPosicionSimilarCon( objetoVisual2));
        CHECK_EQUAL(actual, false);
        delete objetoVisual2;
    }
    
    TEST_FIXTURE(Inicializacion, debeEstarEnPosicionSimilar)
    {
        PosicionPantalla posicion(100,100);
        PosicionPantalla * posicion2 = &posicion;
        obj_grafico = new ObjetoGraficoInterfaz(posicion, al_map_rgb(255,89,34));
        ObjetoGraficoInterfaz* objetoVisual2 = FabricaObjetoGrafica::obtenerInstancia()->crearObjetoVisual(rayoLaser, *posicion2,al_map_rgb(2,2,2));;
        bool actual = (obj_grafico->estaEnPosicionSimilarCon(objetoVisual2));
        CHECK_EQUAL(actual, true);
        delete objetoVisual2;
    }
    
  }


#endif // OBJETOGRAFICOPRUEBAS_HPP
