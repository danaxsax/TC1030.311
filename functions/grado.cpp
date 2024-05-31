#include <iostream>
using namespace std;

string calculate_grade(float n){
    if (n > 0.9){
        return "A";
    } else if (n > 0.8){
        return "B";
    } else if (n > 0.7){
        return "C";
    } else if (n > 0.6){
        return "D";
    } else if (n > 0){
        return "F";
    }
    else {
        return "score incorrecto.";
    }

}
int main(){
    float n;
    cout << "Ingresa Un valor entre 0.0 y 1.0  ";
    cin >> n;
    cout << "Puntuacion nota: " << calculate_grade(n) << endl;
}