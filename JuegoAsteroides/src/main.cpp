#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "Base/JuegoAsteroides.h"
//#include "ClasesDominio/Pantalla.hpp"
#include "LibreriaJuego/LibreriaAllegro.hpp"
#include "LibreriaJuegoSFML/LibreriaSFML.hpp"
#include "LibreriaJuego.hpp"




int main(int argc, char **argv)
{
    LibreriaJuego *libreria = new LibreriaAllegro();
    JuegoAsteroides* juego = new JuegoAsteroides(libreria);
    sleep(1);
    (*juego).iniciarJuego();
    //delete juego;
    //delete libreria;
    return 0;
}