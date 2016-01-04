#ifndef TIPOGRAFIA_HPP
#define TIPOGRAFIA_HPP


#include "../Base/AllegroAPI.hpp"


class Tipografia
{

private:
    ALLEGRO_FONT* fuente;
    
    void fijarFuente(ALLEGRO_FONT* fuente)
    {
        this->fuente = fuente;
    }
    
public:

    Tipografia(ALLEGRO_FONT* fuente)
    {
        fijarFuente(fuente);
    }
    
    ALLEGRO_FONT* obtenerfuente()
    {
        return fuente;
    }
    
    ~Tipografia()
    {
        al_destroy_font(fuente);
    }
};

#endif // TIPOGRAFIA_HPP
