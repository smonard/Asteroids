#ifndef MANEJADOREVENTOS_HPP
#define MANEJADOREVENTOS_HPP

#include <stdio.h>
#include <stdlib.h>
#include <deque>
//#include "../Base/JuegoAsteroides.h"

template <typename T>
class Evento
{
    typedef void(FuncPtr)(T);
    typedef std::deque<FuncPtr> FuncPtrSeq;

    FuncPtrSeq secuenciasFunciones;
public:
    Evento& operator +=(FuncPtr funcion)
    {
        secuenciasFunciones.push_back(funcion);
        return *this;
    }

    void operator()(T x) 
    { 
        for (typename FuncPtrSeq::iterator it(secuenciasFunciones.begin()); it != secuenciasFunciones.end(); ++it)
            (*it)(x);
    }
};


#endif // MANEJADOREVENTOS_HPP
