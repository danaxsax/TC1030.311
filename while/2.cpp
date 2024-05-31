#include <iostream>
using namespace std;

void sumaNumeros() {
    int suma = 0, numero;
    cout << "Introduce números enteros (termina con 0): " << endl;
    while (true) {
        cin >> numero;
        if (numero == 0) break;
        suma += numero;
    }
    cout << suma << endl;
}

int main() {
    sumaNumeros();
    return 0;
}
