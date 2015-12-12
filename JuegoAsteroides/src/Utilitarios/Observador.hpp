#ifndef OBSERVADOR_HPP
#define OBSERVADOR_HPP

class Observador
{
public:
    Observador(){}
    virtual void ejecutarEventoTeclado(int teclaPresionada) = 0;
    virtual ~Observador(){};

};

#endif // OBSERVADOR_HPP
