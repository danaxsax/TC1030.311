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

    int mayor;

    // Usamos condicionales para encontrar el mayor número
    if (x >= y && x >= z) {
        mayor = x;
    } else if (y >= x && y >= z) {
        mayor = y;
    } else {
        mayor = z;
    }

    cout << "El mayor de los tres números es: " << mayor << endl;

    return 0;
}
