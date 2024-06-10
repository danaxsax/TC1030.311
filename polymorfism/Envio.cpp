#include "Envio.h"

Envio::Envio() 
    : NombreR(" "), DireccionR(" "), CiudadR(" "), EstadoR(" "), CodigoPostalR(" "),
      NombreD(" "), DireccionD(" "), CiudadD(" "), EstadoD(" "), CodigoPostalD(" "), 
      CostoEstandarEnvio(15) {}

Envio::Envio(string NombreR, string DireccionR, string CiudadR, string EstadoR, string CodigoPostalR,
             string NombreD, string DireccionD, string CiudadD, string EstadoD, string CodigoPostalD, 
             double CostoEstandarEnvio) 
    : NombreR(NombreR), DireccionR(DireccionR), CiudadR(CiudadR), EstadoR(EstadoR), CodigoPostalR(CodigoPostalR),
      NombreD(NombreD), DireccionD(DireccionD), CiudadD(CiudadD), EstadoD(EstadoD), CodigoPostalD(CodigoPostalD), 
      CostoEstandarEnvio(CostoEstandarEnvio) {}

double Envio::calculaCosto() const {
    return CostoEstandarEnvio;
}

// Getters
string Envio::getNombreR() const { return NombreR; }
string Envio::getDireccionR() const { return DireccionR; }
string Envio::getCiudadR() const { return CiudadR; }
string Envio::getEstadoR() const { return EstadoR; }
string Envio::getCodigoPostalR() const { return CodigoPostalR; }
string Envio::getNombreD() const { return NombreD; }
string Envio::getDireccionD() const { return DireccionD; }
string Envio::getCiudadD() const { return CiudadD; }
string Envio::getEstadoD() const { return EstadoD; }
string Envio::getCodigoPostalD() const { return CodigoPostalD; }
double Envio::getCostoEstandarEnvio() const { return CostoEstandarEnvio; }

// Setters
void Envio::setNombreR(string Nom) { NombreR = Nom; }
void Envio::setDireccionR(string Dir) { DireccionR = Dir; }
void Envio::setCiudadR(string Ciu) { CiudadR = Ciu; }
void Envio::setEstadoR(string Est) { EstadoR = Est; }
void Envio::setCodigoPostalR(string Cod) { CodigoPostalR = Cod; }
void Envio::setNombreD(string NomD) { NombreD = NomD; }
void Envio::setDireccionD(string DirD) { DireccionD = DirD; }
void Envio::setCiudadD(string CiuD) { CiudadD = CiuD; }
void Envio::setEstadoD(string EstD) { EstadoD = EstD; }
void Envio::setCodigoPostalD(string CodD) { CodigoPostalD = CodD; }
void Envio::setCostoEstandarEnvio(double Costo) { CostoEstandarEnvio = Costo; }
