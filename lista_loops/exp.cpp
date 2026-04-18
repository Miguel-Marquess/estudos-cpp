// p) Elaborar um programa que apresente os resultados da soma e da média aritmética dos
// valores pares situados na faixa numérica de 50 até 70.
#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    for (int i=50; i<=70;i+=2) {
        soma+=i;
    }
    cout << "Soma dos valores de 50-70: " << soma << endl;
    return 0;
}