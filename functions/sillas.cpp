#include <iostream>
using namespace std;


float total_antes_descuento(char chair, int n){
    float total = 0;
    if (chair == 'B'){
        total = n * 700;
    } else if (chair == 'E'){
        total = n * 900;
    } else if (chair == 'L'){
        total = n * 1500;
    }
    return (total);
}

float calcula_descuento(float total, char client){
    float discount=0;
    if (10000 <= 10000  && total < 20000){
        discount = total * 0.1;
    } else if (total > 20000){
        discount = total * 0.15;
    }
    
    if (client == 'F'){
        discount += total * 0.2;
    }
    return (discount);
}
int main(){
    char chair, client;
    int n;
    cout<<"Ingrese el tipo de silla: ";
    cin>>chair;
    cout<<"Ingrese el tipo de cliente: ";
    cin>>client;
    cout<<"Ingrese la cantidad de sillas: ";
    cin>>n;
    float total = total_antes_descuento(chair, n);
    float descuento = calcula_descuento(total, client);
    cout<<"El total antes del descuento es: "<<total<<endl;
    cout<<"El descuento es: "<<descuento<<endl;
    cout<<"El total a pagar es: "<<total - descuento<<endl;
}