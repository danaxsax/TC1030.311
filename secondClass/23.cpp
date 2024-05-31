#include <iostream>
using namespace std;

int main() {
    int grados;

    // Entrada de datos
    cout << "Introduce los grados: ";
    cin >> grados;

    // Verificación de rangos y determinación del cuadrante
    if (grados < 0 || grados > 360) {
        cout << "excede" << endl;
    } else if (grados == 0 || grados == 90 || grados == 180 || grados == 270 || grados == 360) {
        cout << "eje" << endl;
    } else if (grados > 0 && grados < 90) {
        cout << "cuadrante 1" << endl;
    } else if (grados > 90 && grados < 180) {
        cout << "cuadrante 2" << endl;
    } else if (grados > 180 && grados < 270) {
        cout << "cuadrante 3" << endl;
    } else if (grados > 270 && grados < 360) {
        cout << "cuadrante 4" << endl;
    }

    return 0;
}
