#include <iostream>
using namespace std;

float area_rectangle(float base, float high){
    return (base * high);
}

float area_prism_rectangle(float base, float high, float depth){
    return (2 * (area_rectangle(base, high) + base*depth + high*depth));
}

int main(){
    float base, high, depth;
    cout<<"Ingrese la base del rectangulo: ";
    cin>>base;
    cout<<"Ingrese la altura del rectangulo: ";
    cin>>high;
    cout<<"Ingrese la profundidad del prisma: ";
    cin>>depth;
    cout<<"El area del prism rectangulo es: "<<area_prism_rectangle(base, high, depth)<<endl;
}