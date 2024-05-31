#include <iostream>
using namespace std;

int main() {
    char jugadaAna, jugadaJuan;

    // Leer las jugadas de Ana y Juan
    cout << "Tirada de Ana: ";
    cin >> jugadaAna;
    cout << "Tirada de Juan: ";
    cin >> jugadaJuan;

    // Verificar que las jugadas sean un solo caracter
    if (cin.fail() || !isalpha(jugadaAna) || !isalpha(jugadaJuan) || cin.get() != '\n') {
        cout << "Las tiradas deben ser un caracter" << endl;
        return 0;
    }

    // Verificar que las jugadas sean válidas
    if ((jugadaAna != 'a' && jugadaAna != 'p' && jugadaAna != 't') ||
        (jugadaJuan != 'a' && jugadaJuan != 'p' && jugadaJuan != 't')) {
        cout << "Tirada incorrecta" << endl;
        return 0;
    }

    // Determinar el resultado del juego
    if (jugadaAna == jugadaJuan) {
        cout << "Empate" << endl;
    } else if ((jugadaAna == 'a' && jugadaJuan == 't') ||
               (jugadaAna == 't' && jugadaJuan == 'p') ||
               (jugadaAna == 'p' && jugadaJuan == 'a')) {
        cout << "Gana Ana" << endl;
    } else {
        cout << "Gana Juan" << endl;
    }

    return 0;
}
