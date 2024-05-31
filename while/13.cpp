#include <iostream>
using namespace std;

void paresEnRango(int a, int b) {
    bool hayPares = false;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
            hayPares = true;
        }
    }
    if (!hayPares) {
        cout << "No hay pares" << endl;
    }
}

int main() {
    int a, b;
    cout << "Introduce el primer número: ";
    cin >> a;
    cout << "Introduce el segundo número: ";
    cin >> b;
    paresEnRango(a, b);
    return 0;
}
