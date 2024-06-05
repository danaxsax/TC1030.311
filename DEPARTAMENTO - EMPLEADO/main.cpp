#include <iostream>
#include <vector>
#include "Empleado.h"
#include "Depto.h"

// Función para crear un arreglo de objetos de tipo Departamento
std::vector<Departamento> crearDepartamentos() {
    std::vector<Departamento> departamentos;
    departamentos.push_back(Departamento(1, "Nomina"));
    departamentos.push_back(Departamento(2, "Contabilidad"));
    departamentos.push_back(Departamento(3, "Cobranza"));
    departamentos.push_back(Departamento(4, "Pagos"));
    return departamentos;
}

// Función para mostrar la información de todos los departamentos
void mostrarDepartamentos(const std::vector<Departamento>& departamentos) {
    std::cout << "Departamentos:" << std::endl;
    for (const auto& depto : departamentos) {
        std::cout << "ID: " << depto.getIdDep() << ", Nombre: " << depto.getNombre() << std::endl;
    }
}

// Función para validar si un departamento existe
bool departamentoExiste(int numDep, const std::vector<Departamento>& departamentos) {
    for (const auto& depto : departamentos) {
        if (depto.getIdDep() == numDep) {
            return true;
        }
    }
    return false;
}

// Función para crear un arreglo de objetos de tipo Empleado
std::vector<Empleado> crearEmpleados(const std::vector<Departamento>& departamentos) {
    std::vector<Empleado> empleados;
    int idEmp, numDep;
    std::string nombre;
    char continuar;

    do {
        std::cout << "Ingrese ID del empleado: ";
        std::cin >> idEmp;
        std::cin.ignore();
        std::cout << "Ingrese nombre del empleado: ";
        std::getline(std::cin, nombre);
        std::cout << "Ingrese ID del departamento: ";
        std::cin >> numDep;

        if (departamentoExiste(numDep, departamentos)) {
            empleados.push_back(Empleado(idEmp, nombre, numDep));
        } else {
            std::cout << "El departamento con ID " << numDep << " no existe. Intente nuevamente." << std::endl;
        }

        std::cout << "Desea agregar otro empleado? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return empleados;
}

// Función para mostrar la información de todos los empleados
void mostrarEmpleados(const std::vector<Empleado>& empleados) {
    std::cout << "Empleados:" << std::endl;
    for (const auto& emp : empleados) {
        std::cout << "ID: " << emp.getIdEmp() << ", Nombre: " << emp.getNombre() << ", Departamento ID: " << emp.getNumDep() << std::endl;
    }
}

// Función para desplegar los empleados que están en el mismo departamento
void empleadosPorDepartamento(int numDep, const std::vector<Empleado>& empleados) {
    std::cout << "Empleados en el Departamento " << numDep << ":" << std::endl;
    for (const auto& emp : empleados) {
        if (emp.getNumDep() == numDep) {
            std::cout << "ID: " << emp.getIdEmp() << ", Nombre: " << emp.getNombre() << std::endl;
        }
    }
}

int main() {
    std::vector<Departamento> departamentos = crearDepartamentos();
    mostrarDepartamentos(departamentos);

    std::vector<Empleado> empleados = crearEmpleados(departamentos);
    mostrarEmpleados(empleados);

    int numDep;
    std::cout << "Ingrese el ID del departamento para listar sus empleados: ";
    std::cin >> numDep;
    empleadosPorDepartamento(numDep, empleados);

    return 0;
}
