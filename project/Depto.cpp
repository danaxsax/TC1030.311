#include "Depto.h"
#include <iostream>

// Constructor
Depto::Depto() : idDep(0), nombre("") {}

Depto::Depto(int id, const std::string& name) : idDep(id), nombre(name) {}

// Getters and setters
int Depto::getIdDep() const {
    return idDep;
}

void Depto::setIdDep(int id) {
    idDep = id;
}

std::string Depto::getNombre() const {
    return nombre;
}

void Depto::setNombre(const std::string& name) {
    nombre = name;
}

// Function to input department data
void Depto::inputData() {
    std::cout << "Enter department ID: ";
    std::cin >> idDep;
    std::cout << "Enter department name: ";
    std::cin.ignore(); // Clear input buffer
    std::getline(std::cin, nombre);
}

// Function to display department information
void Depto::display() const {
    std::cout << "Department ID: " << idDep << ", Name: " << nombre << std::endl;
}
