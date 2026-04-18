// laborar um programa que leia quinze valores numéricos inteiros e no final apresente o
// somatório da fatorial de cada valor lido.

#include <iostream>
using namespace std;

int main() {
    int n[15];
    for (int i = 0; i<=14;i++) {
        cout << "Digite um numero: ";
        cin >> n[i];
    }
    int soma = 0;
    for (int i = 0;i <=14;i++) {
        int fatorial = 1;
        for (int f = n[i]; f>=1; f--) {
            fatorial *= f;
        }
        soma+=fatorial;
    }
    cout << "Soma de todos os fatoriais: " << soma << endl;
    return 0;
}