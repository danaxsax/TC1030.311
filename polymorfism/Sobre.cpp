#include "Sobre.h"

Sobre::Sobre(string NombreR, string DireccionR, string CiudadR, string EstadoR, string CodigoPostalR,
             string NombreD, string DireccionD, string CiudadD, string EstadoD, string CodigoPostalD, 
             double CostoEstandarEnvio, double largo, double ancho, double cargoAdicional)
    : Envio(NombreR, DireccionR, CiudadR, EstadoR, CodigoPostalR, NombreD, DireccionD, CiudadD, EstadoD, CodigoPostalD, CostoEstandarEnvio),
      largo(largo), ancho(ancho), cargoAdicional(cargoAdicional) {}

double Sobre::calculaCosto() const {
    if (largo > 25 || ancho > 30) {
        return Envio::calculaCosto() + cargoAdicional;
    }
    return Envio::calculaCosto();
}
