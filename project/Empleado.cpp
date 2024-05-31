#include "Empleado.h"
#include <iostream>

// Constructor
Empleado::Empleado() : idEmp(0), nombre(""), numDep(0) {}

Empleado::Empleado(int id, const std::string& name, int dept)
    : idEmp(id), nombre(name), numDep(dept) {}

// Getters and setters
int Empleado::getIdEmp() const {
    return idEmp;
}

void Empleado::setIdEmp(int id) {
    idEmp = id;
}

std::string Empleado::getNombre() const {
    return nombre;
}

void Empleado::setNombre(const std::string& name) {
    nombre = name;
}

int Empleado::getNumDep() const {
    return numDep;
}

void Empleado::setNumDep(int dept) {
    numDep = dept;
}

// Function to input employee data
void Empleado::inputData() {
    std::cout << "Enter employee ID: ";
    std::cin >> idEmp;
    std::cout << "Enter employee name: ";
    std::cin.ignore(); // Clear input buffer
    std::getline(std::cin, nombre);
    std::cout << "Enter department number: ";
    std::cin >> numDep;
}

// Function to display employee information
void Empleado::display() const {
    std::cout << "Employee ID: " << idEmp << ", Name: " << nombre << ", Department: " << numDep << std::endl;
}
