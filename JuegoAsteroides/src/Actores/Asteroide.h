#ifndef ASTEROIDE_H
#define ASTEROIDE_H


#include "ObjetoGraficoInterfaz.hpp"

class Asteroide : public ObjetoGraficoInterfaz
{
private:

    void dibujarseNormal();
    void dibujarseDestruido();
    
public:
    Asteroide(PosicionPantalla nposicion, ALLEGRO_COLOR ncolor);
    const bool estaDestruido() const
    {
        return destruido;
    }
    void avanzar();
    void destruirse();
    void dibujarse() override;
    const PosicionPantalla& obtenerPosicion() const override;
    bool esDeTipo(actorEnum tipoActor) override;
    ~Asteroide();
};

#endif // ASTEROIDE_H
