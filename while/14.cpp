#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Escribe un número entero: ";
    cin >> n;
    if (esPrimo(n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
