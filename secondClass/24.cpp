#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;

    // Entrada de datos
    cout << "Da el valor de a: ";
    cin >> a;
    cout << "Da el valor de b: ";
    cin >> b;
    cout << "Da el valor de c: ";
    cin >> c;

    // Verificación de casos especiales y cálculo de soluciones
    if (a == 0 && b == 0) {
        cout << "No tiene solucion" << endl;
    } else if (a == 0 && b != 0) {
        // Ecuación lineal bx + c = 0 => x = -c / b
        double x = -static_cast<double>(c) / b;
        cout << x << endl;
    } else {
        // Ecuación cuadrática ax^2 + bx + c = 0
        double discriminante = b * b - 4 * a * c;
        if (discriminante < 0) {
            cout << "Raices complejas" << endl;
        } else if (discriminante == 0) {
            double x = -static_cast<double>(b) / (2 * a);
            cout << x << endl;
        } else {
            double x1 = (-b + sqrt(discriminante)) / (2 * a);
            double x2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << x1 << endl;
            cout << x2 << endl;
        }
    }

    return 0;
}
