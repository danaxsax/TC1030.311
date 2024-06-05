#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
private:
    int idEmp;
    std::string nombre;
    int numDep;

public:
    Empleado(int idEmp, std::string nombre, int numDep) 
        : idEmp(idEmp), nombre(nombre), numDep(numDep) {}

    int getIdEmp() const { return idEmp; }
    std::string getNombre() const { return nombre; }
    int getNumDep() const { return numDep; }
};

#endif // EMPLEADO_H
