#ifndef COLOR_HPP
#define COLOR_HPP

#include "../Base/AllegroAPI.hpp"


class Color
{
    
private:
    
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
    ALLEGRO_COLOR color;

    void fijarColor(ALLEGRO_COLOR color)
        {
            this->color = color;
        }
    
public:
    
    Color(ALLEGRO_COLOR color)
    {
        fijarColor(color);
    }
    
    ALLEGRO_COLOR obtenerColor()
    {
        return color;
    }
    
    Color(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
    {
        this->red = red;
        this->green = green;
        this->blue = blue;
        this->alpha = alpha;
        color = al_map_rgb(red, green, blue);
    }
    
    virtual ~Color()
    {
    }

    unsigned char GetAlpha() const
    {
        return alpha;
    }
    
    unsigned char GetBlue() const
    {
        return blue;
    }
    
    unsigned char GetGreen() const
    {
        return green;
    }
    
    unsigned char GetRed() const
    {
        return red;
    }
    
};

#endif // COLOR_HPP
