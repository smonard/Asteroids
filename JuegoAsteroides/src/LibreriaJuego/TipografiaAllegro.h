#ifndef TIPOGRAFIAALLEGRO_H
#define TIPOGRAFIAALLEGRO_H

#include "../Base/AllegroAPI.hpp"
#include "../ClasesDominio/Color.hpp"
#include "../ClasesDominio/Pantalla.hpp"
#include "../ClasesDominio/Tipografia.hpp"
#include "../ClasesDominio/Graficador.hpp"
#include "../Linea.hpp"

class TipografiaAllegro : public Tipografia
{
protected:

    ALLEGRO_FONT *tipo;
    //bool cargarFuente(char * ruta, char tamaño);

public:
    TipografiaAllegro();
    ~TipografiaAllegro();
    void dibujarTexto(Color * color ,string texto, PosicionPantalla posicion);
};

#endif // TIPOGRAFIAALLEGRO_H
