#include <iostream>
using namespace std;

// Función para determinar si un año es bisiesto
bool esBisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int anio, mes, dia;

    cout << "Año: ";
    cin >> anio;
    cout << "Mes: ";
    cin >> mes;
    cout << "Día: ";
    cin >> dia;

    int diasEnMes;

    // Determinar la cantidad de días en el mes
    if (mes == 2) {
        if (esBisiesto(anio)) {
            diasEnMes = 29;
        } else {
            diasEnMes = 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasEnMes = 30;
    } else {
        diasEnMes = 31;
    }

    // Incrementar el día
    dia++;

    // Verificar si necesitamos incrementar el mes
    if (dia > diasEnMes) {
        dia = 1;
        mes++;

        // Verificar si necesitamos incrementar el año
        if (mes > 12) {
            mes = 1;
            anio++;
        }
    }

    cout << anio << endl;
    cout << mes << endl;
    cout << dia << endl;

    return 0;
}
