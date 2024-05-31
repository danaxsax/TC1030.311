#include <iostream>
using namespace std;

void promedioSencillo(int n) {
    float numero, suma = 0;
    for (int i = 0; i < n; i++) {
        cin >> numero;
        suma += numero;
    }
    cout << suma / n << endl;
}

int main() {
    int n;
    cout << "Introduce la cantidad de números a promediar: ";
    cin >> n;
    promedioSencillo(n);
    return 0;
}
