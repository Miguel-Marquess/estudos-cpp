#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um valor: ";
    cin >> n;
    if (n < 3) {
        cout << "O valor nao é maior ou igual a 3!" << endl;

    }
    else {
        cout << "O valor é maior q 3!" << endl;
    }
    return 0;
}