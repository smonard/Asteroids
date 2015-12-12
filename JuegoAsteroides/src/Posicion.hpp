#ifndef POSICION_HPP
#define POSICION_HPP

class PosicionPantalla
{
private:
    float x;
    float y;

public:

    PosicionPantalla(){
    }
    
    PosicionPantalla(float nx, float ny){
        x = nx;
        y = ny;
    }
    
    PosicionPantalla& SetX(float x)
    {
        this->x = x;
        return *this;
    }
    
    PosicionPantalla& SetY(float y)
    {
        this->y = y;
        return *this;
    }
    
    float GetX() const
    {
        return x;
    }
    
    float GetY() const
    {
        return y;
    }
};

#endif // POSICION_HPP