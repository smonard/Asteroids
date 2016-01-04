#ifndef FABRICAOBJETOGRAFICA_H
#define FABRICAOBJETOGRAFICA_H

#include "ObjetoGraficoInterfaz.hpp"
#include "ActoresEnumeracion.hpp"

#include "NaveEspacial.h"
#include "RayoLaser.h"
#include "Asteroide.h"


class FabricaObjetoGrafica
{
    
private:
    static FabricaObjetoGrafica* instancia;
    
    FabricaObjetoGrafica();
    virtual ~FabricaObjetoGrafica();
        
public:
    static FabricaObjetoGrafica* obtenerInstancia();
    static void liberarse();
    ObjetoGraficoInterfaz * crearObjetoVisual(actorEnum actor_a_crear, PosicionPantalla nposicion, Color * ncolor);
    bool esDeTipo(actorEnum actor_tipo, ObjetoGraficoInterfaz* objetoAdeterminar);
};

#endif // FABRICAOBJETOGRAFICA_H
