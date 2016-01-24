#include "PantallaAllegro.h"

PantallaAllegro::PantallaAllegro()
{
}

PantallaAllegro::~PantallaAllegro()
{
}


bool PantallaAllegro::crearPantalla(){
    display = al_create_display(ancho_pantalla,alto_pantalla);
    if(!display) {
        fprintf(stderr,"No se pudo crear la pantalla\n");
        return 0;
    }
    return true;
}

void PantallaAllegro::pintarPantalla(Color color){
    al_flip_display();
    al_clear_to_color(al_map_rgb(color.GetRed(), color.GetGreen(), color.GetBlue()));
}

 void PantallaAllegro::destruirPantalla(){
    al_flip_display();
    al_destroy_display(display);
}