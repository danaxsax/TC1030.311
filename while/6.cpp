#include <iostream>
using namespace std;

void cantidadPares() {
    int numero, count = 0;
    cout << "Introduce números enteros (termina con un número negativo): " << endl;
    while (true) {
        cin >> numero;
        if (numero < 0) break;
        if (numero % 2 == 0) count++;
    }
    cout << "Total de pares=" << count << endl;
}

int main() {
    cantidadPares();
    return 0;
}
