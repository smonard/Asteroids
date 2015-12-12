#include "AllegroAPI.h"

AllegroAPI* AllegroAPI::instancia = 0;

AllegroAPI::AllegroAPI()
{
}

AllegroAPI::~AllegroAPI()
{
}

AllegroAPI* AllegroAPI::obtenerInstancia()
{
    if (instancia == 0) {
        instancia = new AllegroAPI();
    }
    return instancia;
}

void AllegroAPI::liberarse()
{
    if (instancia) {
        delete instancia;
    }
    instancia = 0;
}

int AllegroAPI::inicializarComponentesAllegro()
{
    if(!al_init()){
        throw new AllegroInicializacionFallidaExcepcion();
        return -1;
    }
    if(!al_init_primitives_addon()){
        throw new AllegroInicializacionFallidaExcepcion();
        return -1;
    }
    if(!al_install_keyboard()){
        throw new AllegroTecladoExcepcion();
        return -1;
    }
    al_init_font_addon();
    if(!al_init_ttf_addon()){
        throw new AllegroTecladoExcepcion();
        return -1;
    }
    return 0;
}

 ALLEGRO_DISPLAY * AllegroAPI::crearPantalla(){
    
    ALLEGRO_DISPLAY *display = al_create_display(ancho_pantalla,alto_pantalla);
    if(!display) {
        fprintf(stderr,"No se pudo crear la pantalla\n");
        return NULL;
    }
    return display;
}

 void AllegroAPI::destruirPantalla(ALLEGRO_DISPLAY *display){
    al_flip_display();
    al_destroy_display(display);
}

 void AllegroAPI::dibujarLinea(Linea linea, ALLEGRO_COLOR color, float grosor){
    al_draw_line(linea.GetPuntoInicio().GetX(), linea.GetPuntoInicio().GetY(), linea.GetPuntofin().GetX(), linea.GetPuntofin().GetY(), color, grosor);
}

 void AllegroAPI::aplicarTransformacion(PosicionPantalla posicion, float orientacion)
{
    ALLEGRO_TRANSFORM transform; 
    al_identity_transform(&transform); 
    al_rotate_transform(&transform, DEGREES(orientacion)); 
    al_translate_transform(&transform, posicion.GetX(), posicion.GetY()); 
    al_use_transform(&transform);
}

ALLEGRO_COLOR AllegroAPI::obtenerColor(char red,char green, char blue){
    return al_map_rgb(red, green, blue);
}