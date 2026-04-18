// h) Escrever um programa que apresente como resultado a potência de uma base qualquer
// elevada a um expoente qualquer, ou seja, de BE, em que B é o valor da base e E o valor
// do expoente. Considere apenas a entrada de valores inteiros e positivos, ou seja, de
// valores naturais. Sugestão: não utilize o formato “base ↑ expoente”, pois é uma solução
// muito trivial. Use a técnica de laço, em que o valor da base deve ser multiplicado o
// número de vezes determinado no expoente.

#include <iostream>
using namespace std;

int main() {
    int base, expoente;
    int resultado = 1;
    
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    cout << resultado << endl;
    return 0;
}