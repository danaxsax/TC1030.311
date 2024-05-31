#include <iostream>
#include <cmath>
using namespace std;

int sumaDigitos(int numero) {
    numero = abs(numero); // Asegurarse de que el número es positivo
    int suma = 0;
    while (numero > 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

int main() {
    int numero;
    cout << "Introduce un número entero: ";
    cin >> numero;
    cout << sumaDigitos(numero) << endl;
    return 0;
}
