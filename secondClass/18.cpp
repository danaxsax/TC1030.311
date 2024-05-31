#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Ingresa el primer número: ";
    cin >> x;
    cout << "Ingresa el segundo número: ";
    cin >> y;
    cout << "Ingresa el tercer número: ";
    cin >> z;

    int menor, medio, mayor;

    // Usamos condicionales para ordenar los números
    if (x <= y && x <= z) {
        menor = x;
        if (y <= z) {
            medio = y;
            mayor = z;
        } else {
            medio = z;
            mayor = y;
        }
    } else if (y <= x && y <= z) {
        menor = y;
        if (x <= z) {
            medio = x;
            mayor = z;
        } else {
            medio = z;
            mayor = x;
        }
    } else {
        menor = z;
        if (x <= y) {
            medio = x;
            mayor = y;
        } else {
            medio = y;
            mayor = x;
        }
    }

    cout << menor << endl;
    cout << medio << endl;
    cout << mayor << endl;

    return 0;
}
