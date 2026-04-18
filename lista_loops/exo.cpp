
// o) Construir um programa que apresente como resultado a fatorial dos valores ímpares
// situados na faixa numérica de 1 até 10.
#include <iostream>
using namespace std;

int main() {
    for (int i = 9; i>=1; i-=2) {
        int fatorial = 1;
        for (int f = i; f>=1;f--) {
            fatorial *= f;
        }
        cout << "Fatorial de " << i <<  ": " << fatorial << endl;
    }
    return 0;
}