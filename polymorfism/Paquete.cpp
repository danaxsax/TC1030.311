#include "Paquete.h"
#include <stdexcept>

Paquete::Paquete(string NombreR, string DireccionR, string CiudadR, string EstadoR, string CodigoPostalR,
                 string NombreD, string DireccionD, string CiudadD, string EstadoD, string CodigoPostalD, 
                 double CostoEstandarEnvio, double largo, double ancho, double profundidad, double peso, double costoPorKg)
    : Envio(NombreR, DireccionR, CiudadR, EstadoR, CodigoPostalR, NombreD, DireccionD, CiudadD, EstadoD, CodigoPostalD, CostoEstandarEnvio),
      largo(largo), ancho(ancho), profundidad(profundidad), peso(peso), costoPorKg(costoPorKg) {
    if (peso <= 0 || costoPorKg <= 0) {
        throw invalid_argument("Peso y costo por kilogramo deben ser positivos.");
    }
}

double Paquete::calculaCosto() const {
    return Envio::calculaCosto() + (peso * costoPorKg);
}
