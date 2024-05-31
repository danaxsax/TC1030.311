#include <iostream>
using namespace std;

void listaPrecios() {
    char clave;
    int total = 0;
    cout << "Introduce la clave del artículo (A, B, C) o X para terminar: " << endl;
    while (true) {
        cin >> clave;
        if (clave == 'X') break;
        switch (clave) {
            case 'A': total += 120; cout << 120 << endl; break;
            case 'B': total += 250; cout << 250 << endl; break;
            case 'C': total += 360; cout << 360 << endl; break;
            default: cout << "Clave inválida" << endl;
        }
    }
    cout << total << endl;
}

int main() {
    listaPrecios();
    return 0;
}












































































































































































































