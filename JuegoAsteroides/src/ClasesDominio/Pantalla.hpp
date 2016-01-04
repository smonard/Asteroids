#ifndef PANTALLA_HPP
#define PANTALLA_HPP

#include "../Base/AllegroAPI.hpp"


class Pantalla
{
private:
    ALLEGRO_DISPLAY* display;
    
    void fijarDisplay(ALLEGRO_DISPLAY* display)
    {
        this->display = display;
    }
    
public:
    
    Pantalla(ALLEGRO_DISPLAY* display)
    {
        fijarDisplay(display);
    }
    
    ALLEGRO_DISPLAY* obtenerDisplay()
    {
        return display;
    }
    
    virtual ~Pantalla()
    {
    }

};

#endif // PANTALLA_HPP
