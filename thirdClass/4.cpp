#include <iostream>
#include <vector>

void leerMatriz(std::vector<std::vector<int>> &matriz) {
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            std::cin >> matriz[i][j];
        }
    }
}

void sumarMatrices(const std::vector<std::vector<int>> &matriz1, const std::vector<std::vector<int>> &matriz2, std::vector<std::vector<int>> &resultado) {
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void desplegarMatriz(const std::vector<std::vector<int>> &matriz) {
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> matriz1(2, std::vector<int>(2));
    std::vector<std::vector<int>> matriz2(2, std::vector<int>(2));
    std::vector<std::vector<int>> resultado(2, std::vector<int>(2));

    std::cout << "Ingrese los elementos de la primera matriz:\n";
    leerMatriz(matriz1);

    std::cout << "Ingrese los elementos de la segunda matriz:\n";
    leerMatriz(matriz2);

    sumarMatrices(matriz1, matriz2, resultado);

    std::cout << "Matriz resultado:\n";
    desplegarMatriz(resultado);

    return 0;
}
