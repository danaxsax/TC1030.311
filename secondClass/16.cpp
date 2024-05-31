#include <iostream>
using namespace std;

void determinarTriangulo(int x, int y, int z) {
    if (x <= 0 || y <= 0 || z <= 0 || x + y <= z || x + z <= y || y + z <= x) {
        cout << "No satisface" << endl;
    } else if (x == y && y == z) {
        cout << "Es un triangulo equilatero" << endl;
    } else if (x == y || x == z || y == z) {
        cout << "Es un triangulo iscoceles" << endl;
    } else {
        cout << "Es un triangulo escaleno" << endl;
    }
}

    int main() {
    int x, y, z;
    
    cout << "Ingresa el primer lado: ";
    cin >> x;
    cout << "Ingresa el segundo lado: ";
    cin >> y;
    cout << "Ingresa el tercer lado: ";
    cin >> z;
    
    determinarTriangulo(x, y, z);
    
    return 0;
}