#include "CoreLib.h"

CoreLib* CoreLib::instancia = 0;

CoreLib::CoreLib()
{
}

CoreLib::~CoreLib()
{
}

CoreLib* CoreLib::obtenerInstancia()
{
    if (instancia == 0) {
        instancia = new CoreLib();
    }
    return instancia;
}

void CoreLib::liberarse()
{
    if (instancia) {
        delete instancia;
    }
    instancia = 0;
}

int CoreLib::inicializarComponentesAllegro()
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

 Pantalla * CoreLib::crearPantalla(){
    ALLEGRO_DISPLAY *display = al_create_display(ancho_pantalla,alto_pantalla);
    if(!display) {
        fprintf(stderr,"No se pudo crear la pantalla\n");
        return NULL;
    }
    Pantalla *pantalla = new Pantalla(display);
    return pantalla;
}

 void CoreLib::destruirPantalla(Pantalla *display){
    al_flip_display();
    al_destroy_display(display->obtenerDisplay());
    delete display;
}

 void CoreLib::dibujarLinea(Linea linea, Color color, float grosor){
    struct ALLEGRO_COLOR color_al;
    (color_al).r = color.GetRed();
    (color_al).g = color.GetGreen();
    (color_al).b = color.GetBlue();
    (color_al).a = color.GetAlpha();
    
    al_draw_line(linea.GetPuntoInicio().GetX(), linea.GetPuntoInicio().GetY(), linea.GetPuntofin().GetX(), linea.GetPuntofin().GetY(), color_al, grosor);
}

 void CoreLib::aplicarTransformacion(PosicionPantalla posicion, float orientacion)
{
    ALLEGRO_TRANSFORM transform; 
    al_identity_transform(&transform); 
    al_rotate_transform(&transform, DEGREES(orientacion)); 
    al_translate_transform(&transform, posicion.GetX(), posicion.GetY()); 
    al_use_transform(&transform);
}

Color * CoreLib::obtenerColor(unsigned char red,unsigned char green,unsigned char blue){
    return (new Color(red,green,blue,255));//al_map_rgb(red, green, blue);
}

void CoreLib::pintarPantalla(Color color){
    al_clear_to_color(al_map_rgb(color.GetRed(), color.GetGreen(), color.GetBlue()));
}

void CoreLib::dibujarTexto(Tipografia * tipo, Color * color ,string texto, PosicionPantalla posicion){
        CoreLib::obtenerInstancia()->aplicarTransformacion(posicion,0);
        al_set_blender(ALLEGRO_ADD, ALLEGRO_ALPHA, ALLEGRO_INVERSE_ALPHA);
        al_draw_text(tipo->obtenerfuente(), color->obtenerColor(), 0, 0, ALLEGRO_ALIGN_LEFT, &texto[0u]);
}

Tipografia * CoreLib::cargarFuente(char * ruta, char tamaño)
{
    ALLEGRO_FONT *font = al_load_ttf_font(ruta, 24, 0);
        if(font == 0)
            printf("err");
    Tipografia * tipo = new Tipografia(font);
    return tipo;
}