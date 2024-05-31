#include <iostream>
#include "Empleado.h"
#include "Depto.h"

// Function to create an array of Departamento objects
void createDeptArray(Depto* deptArray, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter information for Department " << i+1 << std::endl;
        deptArray[i].inputData();
    }
}

// Function to display information of all departamentos
void displayDeptInfo(const Depto* deptArray, int size) {
    std::cout << "Departamentos:" << std::endl;
    std::cout << "ID\tNombre" << std::endl;
    for (int i = 0; i < size; ++i) {
        deptArray[i].display();
    }
}

// Function to create an array of Empleado objects
void createEmpArray(Empleado* empArray, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter information for Employee " << i+1 << std::endl;
        empArray[i].inputData();
    }
}

// Function to display information of all empleados
void displayEmpInfo(const Empleado* empArray, int size) {
    std::cout << "Empleados:" << std::endl;
    std::cout << "ID\tNombre\tNumDepto" << std::endl;
    for (int i = 0; i < size; ++i) {
        empArray[i].display();
    }
}

int main() {
    const int numDepts = 4;
    const int numEmps = 5;
    Depto deptArray[numDepts];
    Empleado empArray[numEmps];

    // Populate department array
    createDeptArray(deptArray, numDepts);

    // Display department information
    displayDeptInfo(deptArray, numDepts);

    // Populate employee array
    createEmpArray(empArray, numEmps);

    // Display employee information
    displayEmpInfo(empArray, numEmps);

    return 0;
}
