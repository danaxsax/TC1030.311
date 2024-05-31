#include  <iostream>
using namespace std;

float feet_cm(float n){
    return (n * 30.48);
}
float in_cm(float n){
    return (n * 2.54);
}
float yard_cm(float n){
    return (n * 91.44);
}

int main() {
    int option;
    float n;
    cout << "Ingrese la opcion del menu 1.- pies a cm 2.-inches a cm 3.- yardas a cm: ";
    cin >> option;
    const string DIVIDE_BY_ZERO_ERROR = "Error: División entre cero.";
    if (option == 1){
        cout << "Ingrese la cantidad de pies: ";
        cin >> n;
        cout << "El resultado es: " << feet_cm(n) << " cm" << endl;
    } else if (option == 2){
        cout << "Ingrese la cantidad de pulgadas: ";
        cin >> n;
        cout << "El resultado es: " << in_cm(n) << " cm" << endl;
    } else if (option == 3){
        cout << "Ingrese la cantidad de yardas: ";
        cin >> n;
        cout << "El resultado es: " << yard_cm(n) << " cm" << endl;
    } else {
        cout << DIVIDE_BY_ZERO_ERROR << endl;
    }
}