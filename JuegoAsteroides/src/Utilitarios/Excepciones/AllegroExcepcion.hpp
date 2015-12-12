#ifndef ALLEGROEXCEPCION_HPP
#define ALLEGROEXCEPCION_HPP
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <stdarg.h>

using namespace std;
class AllegroExcepcion : public exception
{
protected:
    
    string mensaje;

private:


public:
    AllegroExcepcion()
    {
        mensaje = "Excepcion de allegro";
        //fprintf(stderr, mensaje.c_str());
    }
    
    virtual const string& GetMensaje() const
    {
        return mensaje;
    }
    
    virtual ~AllegroExcepcion()
    {
    }
};

#endif // ALLEGROEXCEPCION_HPP
