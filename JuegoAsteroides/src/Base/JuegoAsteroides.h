#ifndef JUEGOASTEROIDES_H
#define JUEGOASTEROIDES_H



#include "../Actores/NaveEspacial.h"
#include "../Actores/Asteroide.h"
#include "../Actores/ObjetoGraficoInterfaz.hpp"
#include "../Actores/FabricaObjetoGrafica.h"
#include "EventosTeclado.hpp"
#include "../Utilitarios/Observador.hpp"
#include "../Utilitarios/GestorMensajes.hpp"
#include "../ClasesDominio/Color.hpp"
#include "../LibreriaJuego.hpp"
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#include <list>
#include <cstdlib>
#include <mutex>
#include <string>
#include <thread>
#include <deque>
#include <unistd.h>

using namespace std;

class JuegoAsteroides : public Observador
{
private:
    
    int numeroVidas;
    long puntaje = 0;
    bool sigueEjecutando;
    int frecuenciaCreacionAsteroides = 5000000;//900000;
    int frecuenciaActualizacionPantalla = 15000;//5000;
    
    EventosTeclado* eventosHW;
    
    
    FabricaObjetoGrafica * fabricaActores;
    NaveEspacial* naveEspacialActual = 0;
    std::thread * subProcesoMetricas;
    std::mutex nave_mutex;
    std::thread *subProcesoCreacionAsteoides;
    std::list<ObjetoGraficoInterfaz*> lista_actores;
    
    void iniciarMetricas();
    void iniciarCreacionAsteroides();
    
    
    void buclePrincipal();
    
    void actualizarObjetosVisuales();
    
    void destruirObjeto(ObjetoGraficoInterfaz* objetoAdestruir);
    void borrarPantalla();
    
    Pantalla * pantalla;
 
    Graficador* graficador;
public:
    JuegoAsteroides(LibreriaJuego *core);
    bool getSigueEjecutando();
    void iniciarJuego();
    void detenerJuego();
    ~JuegoAsteroides();
    void ejecutarEventoTeclado(int teclaPresionada);
    bool estaTocadoPorRayo(ObjetoGraficoInterfaz* asteroide);
    void destruirObjetos();

};

#endif // JUEGOASTEROIDES_H
