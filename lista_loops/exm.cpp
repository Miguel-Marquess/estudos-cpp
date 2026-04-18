// m) Elaborar um programa que leia dez valores numéricos reais e apresente no final o
// somatório e a média dos valores lidos.

#include <iostream>
using namespace std;

int main() {
    float n[10], soma = 0, media = 0;
    for (int i = 0; i<=9;i++) {
        cout << "Digite um numero: ";
        cin >> n[i];
        soma +=n[i];
    }
    media = soma/10;
    cout << "Soma: " << soma << endl << "Media: " << media << endl;
    return 0;
}