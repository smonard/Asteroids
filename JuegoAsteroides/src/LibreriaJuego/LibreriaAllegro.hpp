#ifndef LIBRERIAALLEGRO_HPP
#define LIBRERIAALLEGRO_HPP


#include "GraficadorAllegro.h"
#include "PantallaAllegro.h"
#include "TipografiaAllegro.h"
#include "../LibreriaJuego.hpp"

class LibreriaAllegro : public LibreriaJuego
{
    
public:
    LibreriaAllegro()
    {
        printf("Instanciando Allegro");
        graficador = new GraficadorAllegro();
        tipografia = new TipografiaAllegro();
        pantalla = new PantallaAllegro();
        
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
            pantalla->crearPantalla();
        }
        return 1;
    }   
    ~LibreriaAllegro()
    {
        delete graficador;
        delete tipografia;
        delete pantalla;
    }

};

#endif // LIBRERIAALLEGRO_HPP
