
#include <iostream>
using namespace std;

int main() {
    int edad;
    char id;
    
    cout << "Edad actual: ";
    cin >> edad;
    
    cout << "¿Tienes identificación oficial? (s/n): ";
    cin >> id;
        
    if ((edad > 0 && edad < 100) && (id == 's' || id == 'n' )) {
    
        if (edad >= 18 && id == 's') {
            cout << "Si puedes tener licencia: " ;
        }
        else {
            cout << "no puedes tener licencia: " ;
        }
    }    
    
    else {
        cout << "Respuesta incorrecta" ;
    }
    
    
    return 0;
}