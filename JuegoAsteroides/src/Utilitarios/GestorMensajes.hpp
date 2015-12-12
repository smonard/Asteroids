#ifndef GESTORMENSAJES_HPP
#define GESTORMENSAJES_HPP

class GestorMensajes
{
    ALLEGRO_FONT *font;
    ALLEGRO_COLOR color;
    
public:

    GestorMensajes()
    {
        font = al_load_ttf_font("/System/Library/Fonts/Menlo.ttc", 28, 0);
        if(font == 0)
            printf("err");
        color = al_map_rgb(0,0,0);
    }
    
    void dibujarTexto(string texto, PosicionPantalla posicion){
        AllegroAPI::obtenerInstancia()->aplicarTransformacion(posicion,0);
        al_set_blender(ALLEGRO_ADD, ALLEGRO_ALPHA, ALLEGRO_INVERSE_ALPHA);
        al_draw_text(font, color, 0, 0, ALLEGRO_ALIGN_LEFT, &texto[0u]);
    }
    
    ~GestorMensajes()
    {
    }

};

#endif // GESTORMENSAJES_HPP
