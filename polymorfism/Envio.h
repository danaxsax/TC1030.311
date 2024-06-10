#ifndef ENVIO_H
#define ENVIO_H

#include <string>
#include <iostream>
using namespace std;

class Envio {
public:
    Envio();
    Envio(string NombreR, string DireccionR, string CiudadR, string EstadoR, string CodigoPostalR,
          string NombreD, string DireccionD, string CiudadD, string EstadoD, string CodigoPostalD, 
          double CostoEstandarEnvio);
    virtual double calculaCosto() const;
    
    // Getters
    string getNombreR() const;
    string getDireccionR() const;
    string getCiudadR() const;
    string getEstadoR() const;
    string getCodigoPostalR() const;
    string getNombreD() const;
    string getDireccionD() const;
    string getCiudadD() const;
    string getEstadoD() const;
    string getCodigoPostalD() const;
    double getCostoEstandarEnvio() const;
    
    // Setters
    void setNombreR(string Nom);
    void setDireccionR(string Dir);
    void setCiudadR(string Ciu);
    void setEstadoR(string Est);
    void setCodigoPostalR(string Cod);
    void setNombreD(string NomD);
    void setDireccionD(string DirD);
    void setCiudadD(string CiuD);
    void setEstadoD(string EstD);
    void setCodigoPostalD(string CodD);
    void setCostoEstandarEnvio(double Costo);

protected:
    string NombreR;
    string DireccionR;
    string CiudadR;
    string EstadoR;
    string CodigoPostalR;
    string NombreD;
    string DireccionD;
    string CiudadD;
    string EstadoD;
    string CodigoPostalD;
    double CostoEstandarEnvio;
};

#endif
