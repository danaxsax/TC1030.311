#include <iostream>
#include <cmath>  // Para usar sqrt y pow
using namespace std;

int main() {
    float radio, x1, y1, x2, y2;

    // Entrada de datos
    cout << "Introduce el radio: ";
    cin >> radio;
    cout << "Introduce x1: ";
    cin >> x1;
    cout << "Introduce y1: ";
    cin >> y1;
    cout << "Introduce x2: ";
    cin >> x2;
    cout << "Introduce y2: ";
    cin >> y2;

    // Cálculo de la distancia entre el centro de la circunferencia y el punto
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Determinar la posición del punto con respecto a la circunferencia
    if (distancia < radio) {
        cout << "DENTRO" << endl;
    } else if (distancia == radio) {
        cout << "SOBRE" << endl;
    } else {
        cout << "FUERA" << endl;
    }

    return 0;
}
