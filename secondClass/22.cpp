#include <iostream>
using namespace std;

int main() {
    int centimetros;

    // Entrada de datos
    cout << "Introduce los cm: ";
    cin >> centimetros;

    // Cálculo de kilómetros, metros y centímetros
    int kilometros = centimetros / 100000;
    centimetros %= 100000;
    int metros = centimetros / 100;
    centimetros %= 100;

    // Salida de resultados
    if (kilometros > 0) {
        cout << kilometros << " km" << endl;
    }
    if (metros > 0) {
        cout << metros << " m" << endl;
    }
    if (centimetros > 0) {
        cout << centimetros << " cm" << endl;
    }
    if (kilometros == 0 && metros == 0 && centimetros == 0) {
        cout << "0 cm" << endl;
    }

    return 0;
}
