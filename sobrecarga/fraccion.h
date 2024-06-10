#ifndef FRACCION_H_INCLUDED
#define FRACCION_H_INCLUDED

#include <iostream>
#include <cmath>

class Fraccion {
private:
    int numerador;
    int denominador;
    void reducir();

public:
    Fraccion(int numerador = 0, int denominador = 1);
    Fraccion operator+(const Fraccion& otra) const;
    Fraccion operator-(const Fraccion& otra) const;
    Fraccion operator*(const Fraccion& otra) const;
    Fraccion operator/(const Fraccion& otra) const;

    bool operator>(const Fraccion& otra) const;
    bool operator<(const Fraccion& otra) const;
    bool operator==(const Fraccion& otra) const;

    void imprimir() const;
    void imprimir(int espacios) const;
    void imprimirFlotante() const;
};

#endif
