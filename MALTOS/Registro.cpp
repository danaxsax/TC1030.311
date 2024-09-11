#include "Registro.h"
#include <iostream>

Registro::Registro() {}

Registro::Registro(Fecha fecha, std::string ip, std::string mensaje) 
    : fecha(fecha), ip(ip), mensaje(mensaje) {}

Fecha Registro::getFecha() const {
    return fecha;
}

void Registro::print() const {
    std::cout << fecha.toString() << " " << ip << " " << mensaje << std::endl;
}

bool Registro::operator<(const Registro& otro) const {
    return this->fecha < otro.fecha;
}

std::ifstream& operator>>(std::ifstream& is, Registro& registro) {
    std::string mes, dia, hora, ip, mensaje;
    is >> mes >> dia >> hora >> ip;
    std::getline(is, mensaje);
    Fecha fecha(mes, stoi(dia), hora);
    registro = Registro(fecha, ip, mensaje);
    return is;
}
