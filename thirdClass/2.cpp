#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Ingrese la cantidad de números que quiere ingresar: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Ingrese los números:\n";
    for(int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    std::vector<int> squaredNums(n);
    for(int i = 0; i < n; ++i) {
        squaredNums[i] = nums[i] * nums[i];
    }

    std::cout << "Lista original: [";
    for(int i = 0; i < n; ++i) {
        std::cout << nums[i] << (i < n-1 ? ", " : "");
    }
    std::cout << "]" << std::endl;

    std::cout << "Lista al cuadrado: [";
    for(int i = 0; i < n; ++i) {
        std::cout << squaredNums[i] << (i < n-1 ? ", " : "");
    }
    std::cout << "]" << std::endl;

    return 0;
}
