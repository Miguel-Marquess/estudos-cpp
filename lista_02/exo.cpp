#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    n*=2;
    if (n >= 30) {
        cout << "A multiplicacao por 2 é maior ou igual a 30: " << n << endl;
    }
    else {
        cout << "A multiplicacao por 2 é menor q 30: " << n << endl;

    }
    return 0;
}