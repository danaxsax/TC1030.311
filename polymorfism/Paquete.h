#ifndef PAQUETE_H
#define PAQUETE_H

#include "Envio.h"

class Paquete : public Envio {
private:
    double largo;
    double ancho;
    double profundidad;
    double peso;
    double costoPorKg;

public:
    Paquete(string NombreR, string DireccionR, string CiudadR, string EstadoR, string CodigoPostalR,
            string NombreD, string DireccionD, string CiudadD, string EstadoD, string CodigoPostalD, 
            double CostoEstandarEnvio, double largo, double ancho, double profundidad, double peso, double costoPorKg);

    double calculaCosto() const override;
};

#endif
