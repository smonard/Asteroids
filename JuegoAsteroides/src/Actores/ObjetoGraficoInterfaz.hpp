#ifndef ACTORINTERFAZ_HPP
#define ACTORINTERFAZ_HPP

#include "../Posicion.hpp"
#include "../Base/AllegroAPI.h"
#include "ActoresEnumeracion.hpp"

class ObjetoGraficoInterfaz
{
    
protected:

    PosicionPantalla posicion;
    
    float orientacion = 0;
    float velocidad;
    bool destruido = false;
    
    float variacion_orientacion;
     
    ALLEGRO_COLOR color;
    
public:

    ObjetoGraficoInterfaz(PosicionPantalla nposicion, ALLEGRO_COLOR ncolor){
        posicion = nposicion;
        color = ncolor;
    }    
    const float& obtenerVelocidad(){
        return velocidad;
    }
    const ObjetoGraficoInterfaz& fijarVelocidad(float nvelocidad){
        this->velocidad = nvelocidad;
        return *this;
    }
    
    bool estaFueraDeLaPantalla(){
       return  !((this)->obtenerPosicion().GetY() < AllegroAPI::obtenerInstancia()->obtenerAlto() && (this)->obtenerPosicion().GetY() > 0);
    }

    bool estaEnPosicionSimilarCon(ObjetoGraficoInterfaz* objVisual2){
        PosicionPantalla posicionObj1 = this->obtenerPosicion();
        PosicionPantalla posicionObj2 = objVisual2->obtenerPosicion();
        return (   posicionObj1.GetX() > posicionObj2.GetX() - 15 
                && posicionObj1.GetX() < posicionObj2.GetX() + 15 
                && posicionObj1.GetY() > posicionObj2.GetY() - 15 
                && posicionObj1.GetY() < posicionObj2.GetY() + 15) ? true:false;
    }

    virtual void dibujarse() {};
    virtual const PosicionPantalla& obtenerPosicion() const {};
    virtual bool esDeTipo(actorEnum tipoActor) {};
    virtual ~ObjetoGraficoInterfaz(){}
    
};

#endif // ACTORINTERFAZ_HPP
