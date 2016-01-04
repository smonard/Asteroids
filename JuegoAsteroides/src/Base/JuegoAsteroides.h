#ifndef JUEGOASTEROIDES_H
#define JUEGOASTEROIDES_H



#include "../Actores/naveEspacial.h"
#include "../Actores/Asteroide.h"
#include "../Actores/ObjetoGraficoInterfaz.hpp"
#include "../Actores/FabricaObjetoGrafica.h"
#include "EventosAllegro.h"
#include "../Utilitarios/Observador.hpp"
#include "../Utilitarios/GestorMensajes.hpp"
#include <list>
#include <cstdlib>
#include <iostream>

class JuegoAsteroides : public Observador
{
private:
    
    int numeroVidas;
    long puntaje = 0;
    bool sigueEjecutando;
    int frecuenciaCreacionAsteroides = 300000;
    int frecuenciaActualizacionPantalla = 5000;
    
    EventosAllegro* eventosAllegro;
    GestorMensajes * gestorMensajes;
    
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
 
public:
    JuegoAsteroides();
    bool getSigueEjecutando();
    void iniciarJuego();
    void detenerJuego();
    ~JuegoAsteroides();
    void ejecutarEventoTeclado(int teclaPresionada);
    bool estaTocadoPorRayo(ObjetoGraficoInterfaz* asteroide);
    void destruirObjetos();

};

#endif // JUEGOASTEROIDES_H
