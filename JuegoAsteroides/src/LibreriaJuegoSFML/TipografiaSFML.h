#ifndef TIPOGRAFIASFML_H
#define TIPOGRAFIASFML_H

#include "SFML_API.hpp"
#include "../ClasesDominio/Color.hpp"
#include "../ClasesDominio/Pantalla.hpp"
#include "../ClasesDominio/Tipografia.hpp"
#include "../ClasesDominio/Graficador.hpp"
#include "../Linea.hpp"

class TipografiaSFML : public Tipografia
{
protected:

    virtual bool cargarFuente(char * ruta, char tamaño);

public:

    TipografiaSFML();
    
    virtual void dibujarTexto( Color * color ,string texto, PosicionPantalla posicion); 
    
    ~TipografiaSFML();

};

#endif // TIPOGRAFIASFML_H
