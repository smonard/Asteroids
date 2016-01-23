#ifndef COLOR_HPP
#define COLOR_HPP



class Color
{
    
private:
    
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;

public:
    
    Color(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
    {
        this->red = red;
        this->green = green;
        this->blue = blue;
        this->alpha = alpha;
    }
    
    Color(unsigned char red, unsigned char green, unsigned char blue)
    {
        this->red = red;
        this->green = green;
        this->blue = blue;
        this->alpha = 1;
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
