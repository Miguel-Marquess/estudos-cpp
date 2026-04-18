// n) Elaborar um programa que leia sucessivamente valores numéricos e apresente no final
// o somatório, a média e o total de valores lidos. O programa deve ler os valores enquanto
// o usuário estiver fornecendo valores positivos. Ou seja, o programa deve parar quando o
// usuário fornecer um valor negativo (menor que zero).
#include <iostream>
using namespace std;

int main() {
    float soma = 0, c = 0, n;
    while (true) {
        cout << "Digite um numero(Negativo se quiser parar): ";
        cin >> n;
        if(n<0) {
            break;
        }
        soma+=n;
        c+=1;
    }
    cout << "Soma: " << soma << endl << "Media: " << soma/c << endl << "Numeros inseridos: " << c << endl;
    return 0;
}