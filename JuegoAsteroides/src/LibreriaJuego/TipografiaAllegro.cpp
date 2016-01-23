#include "TipografiaAllegro.h"

TipografiaAllegro::TipografiaAllegro()
{
}

TipografiaAllegro::~TipografiaAllegro()
{
}

void TipografiaAllegro::dibujarTexto( Color * color ,string texto, PosicionPantalla posicion){
        //CoreLib::obtenerInstancia()->aplicarTransformacion(posicion,0);
        al_set_blender(ALLEGRO_ADD, ALLEGRO_ALPHA, ALLEGRO_INVERSE_ALPHA);
        al_draw_text(tipo, al_map_rgb(color->GetRed(),color->GetGreen(),color->GetBlue()), 0, 0, ALLEGRO_ALIGN_LEFT, &texto[0u]);
}

bool TipografiaAllegro::cargarFuente(char * ruta, char tamaño)
{
    tipo = al_load_ttf_font(ruta, 24, 0);
        if(tipo == 0)
            printf("err");
    return true;;
}
