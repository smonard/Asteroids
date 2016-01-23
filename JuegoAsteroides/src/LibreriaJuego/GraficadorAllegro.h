#ifndef GRAFICADORALLEGRO_H
#define GRAFICADORALLEGRO_H

#include "../Base/AllegroAPI.hpp"
#include "../ClasesDominio/Color.hpp"
#include "../ClasesDominio/Pantalla.hpp"
#include "../ClasesDominio/Tipografia.hpp"
#include "../ClasesDominio/Graficador.hpp"
#include "../Linea.hpp"


#define DEGREES(x) int((x) / 360.0 * 0xFFFFFF)

class GraficadorAllegro : public Graficador
{
public:

    GraficadorAllegro();
    void dibujarLinea(Linea linea, Color color, float grosor) ;
    void aplicarTransformacion(PosicionPantalla posicion, float orientacion);
    ~GraficadorAllegro();
    
};

#endif // GRAFICADORALLEGRO_H
