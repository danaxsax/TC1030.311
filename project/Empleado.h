#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
private:
    int idEmp;
    std::string nombre;
    int numDep;

public:
    Empleado();
    Empleado(int id, const std::string& name, int dept);

    // Getters and setters
    int getIdEmp() const;
    void setIdEmp(int id);
    std::string getNombre() const;
    void setNombre(const std::string& name);
    int getNumDep() const;
    void setNumDep(int dept);

    // Function to input employee data
    void inputData();
    // Function to display employee information
    void display() const;
};

#endif // EMPLEADO_H
