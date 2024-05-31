#include <iostream>
using namespace std;

void promedioDecision() {
    float numero, suma = 0;
    int count = 0;
    cout << "Introduce números flotantes (termina con un número negativo): " << endl;
    while (true) {
        cin >> numero;
        if (numero < 0) break;
        suma += numero;
        count++;
    }
    if (count > 0) {
        cout << suma / count << endl;
    } else {
        cout << 0 << endl;
    }
}

int main() {
    promedioDecision();
    return 0;
}
