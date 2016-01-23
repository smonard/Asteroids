#ifndef PANTALLAALLEGRO_H
#define PANTALLAALLEGRO_H

#include "../Base/AllegroAPI.hpp"
#include "../ClasesDominio/Color.hpp"
#include "../ClasesDominio/Pantalla.hpp"
#include "../ClasesDominio/Tipografia.hpp"
#include "../ClasesDominio/Graficador.hpp"
#include "../Linea.hpp"

class PantallaAllegro : public Pantalla
{
private:
    ALLEGRO_DISPLAY *display;
public:
    PantallaAllegro();
    ~PantallaAllegro();
    bool crearPantalla();
    void destruirPantalla();
    void pintarPantalla(Color color);
};

#endif // PANTALLAALLEGRO_H
