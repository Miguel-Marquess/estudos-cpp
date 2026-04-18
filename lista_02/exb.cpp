#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    if (n < 1){
        n*=(-1);
        cout << "Seu numero é negativo, agora nao mais: " << n << endl;
    }
    else {
        cout << "Seu numero nao é negativo: " << n << endl;
    }
    return 0;
}