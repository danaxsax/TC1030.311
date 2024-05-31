#include <iostream>
using namespace std;

int main() {
    int numero;

    // Entrada de datos
    cout << "Dame un número: ";
    cin >> numero;

    // Verificar el signo del número y mostrar el mensaje correspondiente
    if (numero > 0) {
        cout << "Es positivo" << endl;
    } else if (numero < 0) {
        cout << "Es negativo" << endl;
    } else {
        cout << "Es cero" << endl;
    }

    return 0;
}
