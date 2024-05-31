#include <iostream>
using namespace std;

void alternaCaracteres(int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << "#" << endl;
        } else {
            cout << "%" << endl;
        }
    }
}

int main() {
    int n;
    cout << "Introduce el valor de n: ";
    cin >> n;
    alternaCaracteres(n);
    return 0;
}
