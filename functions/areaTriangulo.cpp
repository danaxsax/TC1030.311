#include <iostream>
using namespace std;

float area_triangle(float base, float high){
    return (base * high / 2);
}
int main(){
    float base, high;
    cout<<"Ingrese la base del triangulo: ";
    cin>>base;
    cout<<"Ingrese la altura del triangulo: ";
    cin>>high;
    cout<<"El area del triangulo es: "<<area_triangle(base, high)<<endl;
}