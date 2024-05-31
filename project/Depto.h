#ifndef DEPTO_H
#define DEPTO_H

#include <string>

class Depto {
private:
    int idDep;
    std::string nombre;

public:
    Depto();
    Depto(int id, const std::string& name);

    // Getters and setters
    int getIdDep() const;
    void setIdDep(int id);
    std::string getNombre() const;
    void setNombre(const std::string& name);

    // Function to input department data
    void inputData();
    // Function to display department information
    void display() const;
};

#endif // DEPTO_H
