#ifndef ALLEGROPRIMITIVASEXCEPCION_HPP
#define ALLEGROPRIMITIVASEXCEPCION_HPP

#include "AllegroExcepcion.hpp" // Base class: AllegroExcepcion

class AllegroPrimitivasExcepcion : public AllegroExcepcion
{
public:
    AllegroPrimitivasExcepcion()
    {
        mensaje = "primitivas de allegro inicializaron bien\n";
        //fprintf(stderr, mensaje.c_str());
    }
    ~AllegroPrimitivasExcepcion()
    {
    }


};

#endif // ALLEGROPRIMITIVASEXCEPCION_HPP
