#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial no definido para negativos" << endl;
        return -1;
    }
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    cout << "Introduce un número entero: ";
    cin >> n;
    if (n >= 0) {
        cout << factorial(n) << endl;
    }
    return 0;
}
