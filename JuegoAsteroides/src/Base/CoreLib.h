/*
 * #ifndef CORELIB_H
#define CORELIB_H

#include "AllegroAPI.hpp"
#include "../Linea.hpp"
#include "../Utilitarios/Excepciones/AllegroInicializacionFallidaExcepcion.hpp"
#include "../Utilitarios/Excepciones/AllegroPrimitivasExcepcion.hpp"
#include "../Utilitarios/Excepciones/AllegroTecladoExcepcion.hpp"
#include "../ClasesDominio/Color.hpp"
#include "../ClasesDominio/Pantalla.hpp"
#include "../ClasesDominio/Tipografia.hpp"

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <thread>
#include <unistd.h>

#define DEGREES(x) int((x) / 360.0 * 0xFFFFFF)

#include <pthread.h>

class CoreLib
{
private:
    static CoreLib* instancia;

    int ancho_pantalla = 600;
    int alto_pantalla = 600;

    CoreLib();
    ~CoreLib();

public:
    int obtenerAlto() const
    {
        return alto_pantalla;
    }
    int obtenerAncho() const
    {
        return ancho_pantalla;
    }
    static CoreLib* obtenerInstancia();

    static void liberarse();

    int inicializarComponentesAllegro();

    //Pantalla* crearPantalla();

    //void destruirPantalla(Pantalla* display);

    //void dibujarLinea(Linea linea, Color color, float grosor);

    //void aplicarTransformacion(PosicionPantalla posicion, float orientacion);

    Tipografia * cargarFuente(char * ruta, char tamaño);
    
    void dibujarTexto(Tipografia * tipo, Color * color ,string texto, PosicionPantalla posicion);
    
    Color * obtenerColor(unsigned char red,unsigned char green,unsigned char blue);
    
    //void pintarPantalla(Color color);
};

#endif // ALLEGROAPI_H
*/