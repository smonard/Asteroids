#ifndef ALLEGROAPI_H
#define ALLEGROAPI_H
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_color.h>
#include <allegro5/allegro_ttf.h>
#include "../Linea.hpp"
#include "../Utilitarios/Excepciones/AllegroInicializacionFallidaExcepcion.hpp"
#include "../Utilitarios/Excepciones/AllegroPrimitivasExcepcion.hpp"
#include "../Utilitarios/Excepciones/AllegroTecladoExcepcion.hpp"

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <thread>
#include <unistd.h>

#define DEGREES(x) int((x) / 360.0 * 0xFFFFFF)

#include <pthread.h>

class AllegroAPI
{
private:
    static AllegroAPI* instancia;

    int ancho_pantalla = 600;
    int alto_pantalla = 600;

    AllegroAPI();
    ~AllegroAPI();

public:
    int obtenerAlto() const
    {
        return alto_pantalla;
    }
    int obtenerAncho() const
    {
        return ancho_pantalla;
    }
    static AllegroAPI* obtenerInstancia();

    static void liberarse();

    int inicializarComponentesAllegro();

    ALLEGRO_DISPLAY* crearPantalla();

    void destruirPantalla(ALLEGRO_DISPLAY* display);

    void dibujarLinea(Linea linea, ALLEGRO_COLOR color, float grosor);

    void aplicarTransformacion(PosicionPantalla posicion, float orientacion);

    ALLEGRO_COLOR obtenerColor(char red, char green, char blue);
};

#endif // ALLEGROAPI_H
