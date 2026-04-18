// b) Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a
// qual deve ser apresentada de acordo com sua forma tradicional.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    for (int i=1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num*i << endl;
    }
    return 0;
}