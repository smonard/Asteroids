#ifndef RAYOLASER_H
#define RAYOLASER_H



#include "ObjetoGraficoInterfaz.hpp"

class RayoLaser : public ObjetoGraficoInterfaz
{
private:
    
public:
    RayoLaser(PosicionPantalla nposicion, Color * ncolor);
    ~RayoLaser();
    void avanzar();
    void dibujarse() override;
    const PosicionPantalla& obtenerPosicion() const override;
    bool esDeTipo(actorEnum tipoActor) override;
};

#endif // RAYOLASER_H
