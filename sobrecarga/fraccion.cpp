#include "Fraccion.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int mcd(int a, int b) {
    return b == 0 ? a : mcd(b, a % b);
}

void Fraccion::reducir() {
    int divisor = mcd(abs(numerador), abs(denominador));
    numerador /= divisor;
    denominador /= divisor;
    if (denominador < 0) {
        numerador = -numerador;
        denominador = -denominador;
    }
}

Fraccion::Fraccion(int numerador, int denominador) : numerador(numerador), denominador(denominador) {
    if (denominador == 0) {
        throw invalid_argument("El denominador no puede ser cero.");
    }
    reducir();
}

Fraccion Fraccion::operator+(const Fraccion& otra) const {
    int num = numerador * otra.denominador + otra.numerador * denominador;
    int den = denominador * otra.denominador;
    return Fraccion(num, den);
}

Fraccion Fraccion::operator-(const Fraccion& otra) const {
    int num = numerador * otra.denominador - otra.numerador * denominador;
    int den = denominador * otra.denominador;
    return Fraccion(num, den);
}

Fraccion Fraccion::operator*(const Fraccion& otra) const {
    int num = numerador * otra.numerador;
    int den = denominador * otra.denominador;
    return Fraccion(num, den);
}

Fraccion Fraccion::operator/(const Fraccion& otra) const {
    if (otra.numerador == 0) {
        throw invalid_argument("División por cero no permitida.");
    }
    int num = numerador * otra.denominador;
    int den = denominador * otra.numerador;
    return Fraccion(num, den);
}

bool Fraccion::operator>(const Fraccion& otra) const {
    return numerador * otra.denominador > otra.numerador * denominador;
}

bool Fraccion::operator<(const Fraccion& otra) const {
    return numerador * otra.denominador < otra.numerador * denominador;
}

bool Fraccion::operator==(const Fraccion& otra) const {
    return numerador * otra.denominador == otra.numerador * denominador;
}

void Fraccion::imprimir() const {
    cout << numerador << "/" << denominador << endl;
}

void Fraccion::imprimir(int espacios) const {
    cout << setw(espacios) << numerador << "/" << setw(espacios) << denominador << endl;
}

void Fraccion::imprimirFlotante() const {
    cout << fixed << setprecision(6) << static_cast<double>(numerador) / denominador << endl;
}
