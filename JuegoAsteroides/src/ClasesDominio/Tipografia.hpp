#ifndef TIPOGRAFIA_HPP
#define TIPOGRAFIA_HPP


#include "Color.hpp"
#include "../Linea.hpp"
#include <string>

using namespace std;

class Tipografia
{
protected:

    //virtual bool cargarFuente(char * ruta, char tamaño) = 0;

public:

    Tipografia(){}
    
    virtual void dibujarTexto( Color * color ,string texto, PosicionPantalla posicion) = 0; 

    virtual ~Tipografia(){}
    
};

#endif // TIPOGRAFIA_HPP
