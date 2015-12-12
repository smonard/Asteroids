#ifndef ALLEGROTECLADOEXCEPCION_HPP
#define ALLEGROTECLADOEXCEPCION_HPP

#include "AllegroExcepcion.hpp" // Base class: AllegroExcepcion

class AllegroTecladoExcepcion : public AllegroExcepcion
{
public:
    AllegroTecladoExcepcion()
    {
        mensaje = "Allegro no se pudo comunicar con el teclado\n";
        //fprintf(stderr, mensaje.c_str());
    }
    ~AllegroTecladoExcepcion()
    {
    }

};

#endif // ALLEGROTECLADOEXCEPCION_HPP
