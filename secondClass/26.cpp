#include <iostream>
using namespace std;

bool es_bisiesto(int year) {
    if (year <= 0) {
        cout << "Dato incorrecto" << endl;
        return false;
    } else if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int year;
    cout << "Año: ";
    cin >> year;

    cout << boolalpha << es_bisiesto(year) << endl;

    return 0;
}
