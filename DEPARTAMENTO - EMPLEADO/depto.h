#ifndef DEPTO_H
#define DEPTO_H

#include <string>

class Departamento {
private:
    int idDep;
    std::string nombre;

public:
    Departamento(int idDep, std::string nombre) 
        : idDep(idDep), nombre(nombre) {}

    int getIdDep() const { return idDep; }
    std::string getNombre() const { return nombre; }
};

#endif // DEPTO_H
