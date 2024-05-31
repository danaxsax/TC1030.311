#include <iostream>
using namespace std;

int sumaConsecutivos(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    cout << "Introduce un número entero positivo: ";
    cin >> n;
    cout << sumaConsecutivos(n) << endl;
    return 0;
}
