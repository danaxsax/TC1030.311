#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Registro.h"

using namespace std;

void leerArchivo(string, vector<Registro>&);
void guardarArchivoOrdenado(string, const vector<Registro>&);
void buscarRegistrosPorFecha(const vector<Registro>&, Fecha, Fecha);

int main(int argc, char* argv[]) {
    string nombreArchivo = "bitacora.txt";
    vector<Registro> registros;

    // Si el nombre de archivo fue pasado como argumento
    if (argc > 1) {
        nombreArchivo = argv[1];
    }

    // Leer los datos del archivo
    leerArchivo(nombreArchivo, registros);

    // Ordenar los registros por fecha
    sort(registros.begin(), registros.end(), [](const Registro& a, const Registro& b) {
        return a.getFecha() < b.getFecha();
    });

    // Guardar los registros ordenados en un archivo
    guardarArchivoOrdenado("bitacora_ordenada.txt", registros);

    // Solicitar las fechas de búsqueda al usuario
    string fechaInicio, fechaFin;
    cout << "Ingresa la fecha de inicio (formato: MMM dd hh:mm:ss): ";
    cin.ignore();
    getline(cin, fechaInicio);
    cout << "Ingresa la fecha de fin (formato: MMM dd hh:mm:ss): ";
    getline(cin, fechaFin);

    // Crear objetos Fecha
    Fecha inicio(fechaInicio);
    Fecha fin(fechaFin);

    // Buscar y desplegar registros en el rango de fechas
    buscarRegistrosPorFecha(registros, inicio, fin);

    return 0;
}

void leerArchivo(string nombreArchivo, vector<Registro>& registros) {
    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error al abrir el archivo " << nombreArchivo << endl;
        return;
    }

    Registro registro;
    while (archivo >> registro) {
        registros.push_back(registro);
    }

    archivo.close();
}

void guardarArchivoOrdenado(string nombreArchivo, const vector<Registro>& registros) {
    ofstream archivoSalida(nombreArchivo);
    if (!archivoSalida) {
        cerr << "Error al abrir el archivo " << nombreArchivo << endl;
        return;
    }

    for (const auto& registro : registros) {
        archivoSalida << registro << endl;
    }

    archivoSalida.close();
}

void buscarRegistrosPorFecha(const vector<Registro>& registros, Fecha inicio, Fecha fin) {
    for (const auto& registro : registros) {
        if (registro.getFecha() >= inicio && registro.getFecha() <= fin) {
            registro.print();
        }
    }
}
