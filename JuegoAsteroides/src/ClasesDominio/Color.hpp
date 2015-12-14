#ifndef COLOR_HPP
#define COLOR_HPP

class Color
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
public:
    Color(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha;)
    {
        this->red = red;
        this->green = green;
        this->blue = blue;
        this->alpha = alpha;
    }
    virtual ~Color()
    {
    }

};

#endif // COLOR_HPP
