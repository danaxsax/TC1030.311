#include "Fraccion.h"
#include <iostream>

using namespace std;

int main() {
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);
    
    Fraccion suma = f1 + f2;
    Fraccion resta = f1 - f2;
    Fraccion multiplicacion = f1 * f2;
    Fraccion division = f1 / f2;
    
    cout << "f1: "; f1.imprimir();
    cout << "f2: "; f2.imprimir();
    
    cout << "Suma: "; suma.imprimir();
    cout << "Resta: "; resta.imprimir();
    cout << "Multiplicación: "; multiplicacion.imprimir();
    cout << "División: "; division.imprimir();
    
    cout << "Imprimir con espacios (4): "; f1.imprimir(4);
    cout << "Imprimir como flotante: "; f1.imprimirFlotante();
    
    cout << "Comparaciones: " << endl;
    cout << "f1 > f2: " << (f1 > f2) << endl;
    cout << "f1 < f2: " << (f1 < f2) << endl;
    cout << "f1 == f2: " << (f1 == f2) << endl;

    return 0;
}
