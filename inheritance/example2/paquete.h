#ifndef PAQUETE_H_INCLUDED
#define PAQUETE_H_INCLUDED

#include "Envio.h"

class Paquete : public Envio {
private:
    double largo;
    double ancho;
    double profundidad;
    double peso;
    double costoPorKg;

public:
    Paquete(const string& nombreR, const string& direccionR, const string& ciudadR, const string& estadoR, const string& codigoPostalR,
            const string& nombreD, const string& direccionD, const string& ciudadD, const string& estadoD, const string& codigoPostalD, 
            double costoEstandar, double largo, double ancho, double profundidad, double peso, double costoPorKg);

    double calculaCosto() const override;
};

#endif
