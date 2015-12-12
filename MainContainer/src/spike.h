#ifndef SPIKE_H
#define SPIKE_H

#include <stdio.h>
#include <stdlib.h>
#include <deque>


template <typename T, class T2>
class Evento2
{
    typedef void(FuncPtr)(T);
    typedef std::deque<typename T2::FuncPtr> FuncPtrSeq;

    FuncPtrSeq secuenciasFunciones;
public:
    Evento2& operator +=(typename T2::FuncPtr f)
    {
        secuenciasFunciones.push_back(f);
        return *this;
    }

    void operator()(T x) 
    { 
        for (typename FuncPtrSeq::iterator it(secuenciasFunciones.begin()); it != secuenciasFunciones.end(); ++it)
            (*it)(x);
    }
};

#endif // SPIKE_H
