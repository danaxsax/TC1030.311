#include <iostream>
using namespace std;

void rangoPares(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int a, b;
    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    rangoPares(a, b);
    return 0;
}
