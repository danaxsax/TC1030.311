#ifndef SOBRE_H
#define SOBRE_H

#include "Envio.h"

class Sobre : public Envio {
private:
    double largo;
    double ancho;
    double cargoAdicional;

public:
    Sobre(string NombreR, string DireccionR, string CiudadR, string EstadoR, string CodigoPostalR,
          string NombreD, string DireccionD, string CiudadD, string EstadoD, string CodigoPostalD, 
          double CostoEstandarEnvio, double largo, double ancho, double cargoAdicional);

    double calculaCosto() const override;
};

#endif
