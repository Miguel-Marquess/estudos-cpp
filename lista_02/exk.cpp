#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um valor: ";
    cin >> n;
    if (n <= 9 && n >= 1){
        cout << "O numero esta na faixa permitida!" << endl;
    }
    else {
        cout << "O numero nao esta na faixa permitida!" << endl;
    }
    return 0;
}
