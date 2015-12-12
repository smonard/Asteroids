#ifndef ALLEGROINICIALIZACIONFALLIDAEXCEPCION_HPP
#define ALLEGROINICIALIZACIONFALLIDAEXCEPCION_HPP

#include "AllegroExcepcion.hpp" // Base class: AllegroExcepcion

class AllegroInicializacionFallidaExcepcion : public AllegroExcepcion
{
public:
    AllegroInicializacionFallidaExcepcion()
    {
        mensaje = "Allegro no se inicializó bien\n";
        //fprintf(stderr, mensaje.c_str());
    }
    ~AllegroInicializacionFallidaExcepcion()
    {
    }

};

#endif // ALLEGROINICIALIZACIONFALLIDAEXCEPCION_HPP
