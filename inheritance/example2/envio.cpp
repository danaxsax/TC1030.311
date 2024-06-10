#include "Envio.h"

Envio::Envio(const string& nombreR, const string& direccionR, const string& ciudadR, const string& estadoR, const string& codigoPostalR,
             const string& nombreD, const string& direccionD, const string& ciudadD, const string& estadoD, const string& codigoPostalD, 
             double costoEstandar)
    : nombreRemitente(nombreR), direccionRemitente(direccionR), ciudadRemitente(ciudadR), estadoRemitente(estadoR), codigoPostalRemitente(codigoPostalR),
      nombreDestinatario(nombreD), direccionDestinatario(direccionD), ciudadDestinatario(ciudadD), estadoDestinatario(estadoD), codigoPostalDestinatario(codigoPostalD),
      costoEstandar(costoEstandar) {}

double Envio::calculaCosto() const {
    return costoEstandar;
}
