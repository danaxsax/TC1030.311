#include <iostream>
using namespace std;

void cuentaNumeros(int n) {
    int i = 1;
    while (i <= n) {
        cout << i << endl;
        i++;
    }
}

int main() {
    int n;
    cout << "Introduce un número positivo: ";
    cin >> n;
    cuentaNumeros(n);
    return 0;
}
