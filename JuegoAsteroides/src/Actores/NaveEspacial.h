#ifndef NAVEESPACIAL_H
#define NAVEESPACIAL_H

#include "rayoLaser.h"
#include "ObjetoGraficoInterfaz.hpp"
#include "FabricaObjetoGrafica.h"

class NaveEspacial : public ObjetoGraficoInterfaz
{
private:
    
public:

    NaveEspacial(PosicionPantalla nposicion, ALLEGRO_COLOR ncolor);
    void dibujarse() override;
    
    const PosicionPantalla& obtenerPosicion() const override;
    void irIzquierda();
    void irDerecha();
    bool esDeTipo(actorEnum tipoActor) override;
    ObjetoGraficoInterfaz* disparar();
    ~NaveEspacial();

};

#endif // NAVEESPACIAL_H