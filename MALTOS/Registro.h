#pragma once
#include <string>
#include "Fecha.h"
#include <fstream>

class Registro {
  protected:
    Fecha fecha;
    std::string ip;
    std::string mensaje;
  public:
    Registro();
    Registro(Fecha, std::string, std::string);
    Fecha getFecha() const;
    void print() const;
    bool operator<(const Registro&) const;
    friend std::ifstream& operator>>(std::ifstream&, Registro&);
};
