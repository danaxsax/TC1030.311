#ifndef SOBRE_H_INCLUDED
#define SOBRE_H_INCLUDED

#include "Envio.h"

class Sobre : public Envio {
private:
    double largo;
    double ancho;
    double cargoAdicional;

public:
    Sobre(const string& nombreR, const string& direccionR, const string& ciudadR, const string& estadoR, const string& codigoPostalR,
          const string& nombreD, const string& direccionD, const string& ciudadD, const string& estadoD, const string& codigoPostalD, 
          double costoEstandar, double largo, double ancho, double cargoAdicional);

    double calculaCosto() const override;
};

#endif
