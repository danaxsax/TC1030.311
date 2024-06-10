#ifndef ENVIO_H_INCLUDED
#define ENVIO_H_INCLUDED

#include <string>
using namespace std;

class Envio {
protected:
    string nombreRemitente;
    string direccionRemitente;
    string ciudadRemitente;
    string estadoRemitente;
    string codigoPostalRemitente;

    string nombreDestinatario;
    string direccionDestinatario;
    string ciudadDestinatario;
    string estadoDestinatario;
    string codigoPostalDestinatario;

    double costoEstandar;

public:
    Envio(const string& nombreR, const string& direccionR, const string& ciudadR, const string& estadoR, const string& codigoPostalR,
          const string& nombreD, const string& direccionD, const string& ciudadD, const string& estadoD, const string& codigoPostalD, 
          double costoEstandar);

    virtual double calculaCosto() const;
};

#endif
