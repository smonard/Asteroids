#ifndef SUJETO_HPP
#define SUJETO_HPP

#include <stdlib.h>
#include <stdio.h>
#include <list>
#include "Observador.hpp"

class Sujeto
{
protected:
    std::list<Observador*> listaObservadores;
public:
    virtual void adjuntarObservador(Observador* observadorNuevo) = 0;
    virtual void enTeclaPresionada(int teclaPresionada) = 0;
};

#endif // SUJETO_HPP
