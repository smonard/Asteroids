#ifndef LIBRERIAALLEGRO_HPP
#define LIBRERIAALLEGRO_HPP


#include "GraficadorAllegro.h"
#include "PantallaAllegro.h"
#include "TipografiaAllegro.h"
#include "EventosAllegro.h"
#include "../LibreriaJuego.hpp"

class LibreriaAllegro : public LibreriaJuego
{
    
public:
    LibreriaAllegro()
    {
        printf("Instanciando Allegro");
        init();
        graficador = new GraficadorAllegro();
        tipografia = new TipografiaAllegro();
        pantalla = new PantallaAllegro();
        eventos =  new EventosAllegro();
        pantalla->crearPantalla();
    }
    bool init()
    {
        if(!inicializado){
            if(!al_init()){
                throw new AllegroInicializacionFallidaExcepcion();
                return 0;
            }
            if(!al_init_primitives_addon()){
                throw new AllegroInicializacionFallidaExcepcion();
                return 0;
            }
            if(!al_install_keyboard()){
                throw new AllegroTecladoExcepcion();
                return 0;
            }
            al_init_font_addon();
            if(!al_init_ttf_addon()){
                throw new AllegroTecladoExcepcion();
                return 0;
            }
            
        }
        return 1;
    }   
    ~LibreriaAllegro()
    {
        delete graficador;
        delete tipografia;
        delete pantalla;
        delete eventos;
    }

};

#endif // LIBRERIAALLEGRO_HPP
