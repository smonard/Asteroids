#include "GraficadorAllegro.h"

GraficadorAllegro::GraficadorAllegro()
{
}

void GraficadorAllegro::dibujarLinea(Linea linea, Color color, float grosor){
    struct ALLEGRO_COLOR color_al;
    (color_al).r = color.GetRed();
    (color_al).g = color.GetGreen();
    (color_al).b = color.GetBlue();
    (color_al).a = color.GetAlpha();
    
    al_draw_line(linea.GetPuntoInicio().GetX(), linea.GetPuntoInicio().GetY(), linea.GetPuntofin().GetX(), linea.GetPuntofin().GetY(), color_al, grosor);
}

void GraficadorAllegro::aplicarTransformacion(PosicionPantalla posicion, float orientacion)
{
    ALLEGRO_TRANSFORM transform; 
    al_identity_transform(&transform); 
    al_rotate_transform(&transform, DEGREES(orientacion)); 
    al_translate_transform(&transform, posicion.GetX(), posicion.GetY()); 
    al_use_transform(&transform);
}

GraficadorAllegro::~GraficadorAllegro()
{
    
}

