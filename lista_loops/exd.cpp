// d) Elaborar um programa que apresente o somatório dos valores pares existentes na faixa
// de 1 até 500.

#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    for (int i = 1; i<=500;i++) {
        if(i%2==0) {
            soma+=i;
        }
    }
    cout << "A soma de todos os valores pares de 1 a 500 é: " << soma << endl;
    return 0;
}