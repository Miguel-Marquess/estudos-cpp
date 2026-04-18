#include <iostream>
using namespace std;

int main() {
    int t, valor;
    for (int i=0; i < 3; i++) {
        cout << "Informe um numero: ";
        cin >> t;
        valor +=t;
    }
    if (valor >= 100) {
        cout << "A soma dos valores é maior ou igual 100!" << endl;
    }
    else {
        cout << "A soma dos valores é menor q 100!" << endl;
    }
    return 0;
}