#include "Fecha.h"
#include <sstream>

Fecha::Fecha() {}

Fecha::Fecha(std::string mes, int dia, std::string hora) 
    : mes(mes), dia(dia), hora(hora) {}

Fecha::Fecha(std::string fechaCompleta) {
    std::istringstream iss(fechaCompleta);
    iss >> mes >> dia >> hora;
}

bool Fecha::operator<(const Fecha& otra) const {
    // Comparación básica de fechas (se puede mejorar dependiendo de cómo quieras comparar)
    if (mes == otra.mes) {
        if (dia == otra.dia) {
            return hora < otra.hora;
        }
        return dia < otra.dia;
    }
    return mes < otra.mes;
}

bool Fecha::operator>=(const Fecha& otra) const {
    return !(*this < otra);
}

bool Fecha::operator<=(const Fecha& otra) const {
    return (*this < otra) || (*this == otra);
}

std::string Fecha::toString() const {
    return mes + " " + std::to_string(dia) + " " + hora;
}
