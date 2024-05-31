#include <iostream>
using namespace std;

int menorCuadradoMayor(int n) {
    int i = 1;
    while (i * i <= n) {
        i++;
    }
    return i;
}

int main() {
    int n;
    cout << "Escribe un número: ";
    cin >> n;
    cout << menorCuadradoMayor(n) << endl;
    return 0;
}
