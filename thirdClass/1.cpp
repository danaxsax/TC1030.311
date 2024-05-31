#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Ingrese la cantidad de valores para el arreglo: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Ingrese los números del arreglo:\n";
    for(int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int sumPares = 0, sumImpares = 0;
    for(int i = 0; i < n; ++i) {
        if(i % 2 == 0) {
            sumPares += arr[i];
        } else {
            sumImpares += arr[i];
        }
    }

    std::cout << "Suma de casillas pares: " << sumPares << std::endl;
    std::cout << "Suma de casillas impares: " << sumImpares << std::endl;

    return 0;
}
