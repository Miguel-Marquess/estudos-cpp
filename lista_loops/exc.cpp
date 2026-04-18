// c) Construir um programa que apresente a soma dos cem primeiros números naturais (1 +
// 2 + 3 +...+ 98 + 99 + 100).
#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    for (int i=0;i <= 100;i++) {
        soma += i;
    }
    cout << "A soma de todos os numeros naturais de 1-100 é: " << soma << endl;
    return 0;
}