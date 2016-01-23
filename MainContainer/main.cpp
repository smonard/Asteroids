#include <stdio.h>
#include <cstdlib>
#include <iostream>
//#include "base/juegoAsteroides.h"
//#include "ClasesDominio/Pantalla.hpp"
#include "LibreriaJuego/LibreriaAllegro.hpp"
#include "LibreriaJuegoSFML/LibreriaSFML.hpp"
//#include "LibreriaJuego.hpp"




int main(int argc, char **argv)
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "Juego Asteroides");
    /*
    LibreriaJuego *libreria = new LibreriaAllegro();
    libreria->init();
    JuegoAsteroides* juego = new JuegoAsteroides(libreria);
    sleep(1);
    (*juego).iniciarJuego();
    delete juego;
    delete libreria;*/
    return 0;
}



/*
int main(int argc, char **argv){
 
   if(!al_init()){
      fprintf(stderr, "Failed to initialize Allegro.\n");
      return -1;
   }
 
   al_init_font_addon(); // initialize the font addon
   al_init_ttf_addon();// initialize the ttf (True Type Font) addon
 
   ALLEGRO_DISPLAY *display = al_create_display(640,480);
 
   if (!display){
      fprintf(stderr, "Failed to create display.\n");
      return -1;
   }
 
   ALLEGRO_FONT *font = al_load_ttf_font("/System/Library/Fonts/Menlo.ttc",23,0 );
 
   if (!font){
      fprintf(stderr, "Could not load 'menlo.ttc'.\n");
      return -1;
   }
 
   al_clear_to_color(al_map_rgb(50,10,70));
   al_draw_text(font, al_map_rgb(255,255,255), 640/2, (480/4),ALLEGRO_ALIGN_CENTRE, "Hola");
 
   al_flip_display();
 
   al_rest(10.0);
 
   al_destroy_display(display);
 
   return 0;
}*/

