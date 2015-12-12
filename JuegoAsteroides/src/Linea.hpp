#ifndef LINEA_HPP
#define LINEA_HPP
#include "Posicion.hpp"

class Linea
{
    PosicionPantalla puntoInicio;
    PosicionPantalla puntofin;

public:
    Linea(PosicionPantalla ninicio, PosicionPantalla nfin)
    {
        SetPuntoInicio(ninicio);
        SetPuntofin(nfin);
    }
    Linea& SetPuntoInicio(const PosicionPantalla& puntoInicio)
    {
        this->puntoInicio = puntoInicio;
        return *this;
    }
    Linea& SetPuntofin(const PosicionPantalla& puntofin)
    {
        this->puntofin = puntofin;
        return *this;
    }
    const PosicionPantalla& GetPuntoInicio() const
    {
        return puntoInicio;
    }
    const PosicionPantalla& GetPuntofin() const
    {
        return puntofin;
    }
    ~Linea()
    {
    }
};

#endif // LINEA_HPP
