#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Ingrese la cantidad de elementos para cada arreglo: ";
    std::cin >> n;

    if(n <= 0) {
        std::cout << "Error" << std::endl;
        return 1;
    }

    std::vector<int> arr1(n), arr2(n);
    std::cout << "Ingrese los elementos del primer arreglo:\n";
    for(int i = 0; i < n; ++i) {
        std::cin >> arr1[i];
    }

    std::cout << "Ingrese los elementos del segundo arreglo:\n";
    for(int i = 0; i < n; ++i) {
        std::cin >> arr2[i];
    }

    std::vector<int> sumArr(n);
    for(int i = 0; i < n; ++i) {
        sumArr[i] = arr1[i] + arr2[i];
    }

    std::cout << "Arreglo suma: [";
    for(int i = 0; i < n; ++i) {
        std::cout << sumArr[i] << (i < n-1 ? ", " : "");
    }
    std::cout << "]" << std::endl;

    return 0;
}
