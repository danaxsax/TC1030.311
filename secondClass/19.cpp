#include <iostream>
#include <iomanip>  // Para usar setprecision
using namespace std;

int main() {
    float peso, altura;

    cout << "Peso en kg: ";
    cin >> peso;
    cout << "Altura en m: ";
    cin >> altura;

    // Verificar si el peso o la altura son menores o iguales a 0
    if (peso <= 0 || altura <= 0) {
        cout << "Revisa tus datos, alguno de ellos es erróneo." << endl;
    } else {
        // Calcular el índice de masa corporal
        float imc = peso / (altura * altura);

        // Mostrar el IMC con dos decimales
        cout << fixed << setprecision(2);

        // Determinar la categoría del IMC
        if (imc < 20) {
            cout << "PESO BAJO" << endl;
        } else if (imc < 25) {
            cout << "NORMAL" << endl;
        } else if (imc < 30) {
            cout << "SOBREPESO" << endl;
        } else if (imc < 40) {
            cout << "OBESIDAD" << endl;
        } else {
            cout << "OBESIDAD MORBIDA" << endl;
        }
    }

    return 0;
}
