// k) Escrever um programa que calcule e apresente o somatório do número de grãos de trigo
// que se pode obter em um tabuleiro de xadrez, obedecendo à seguinte regra: colocar um
// grão de trigo no primeiro quadro, e nos quadros seguintes, o dobro do quadro anterior.
// Ou seja, no primeiro quadro coloca-se um grão, no segundo quadro colocam-se dois
// grãos (neste momento têm-se três grãos), no terceiro quadro colocam-se quatro grãos
// (tendo neste momento sete grãos), no quarto quadro colocam-se oito grãos (tendo-se,
// então, 15 grãos), até atingir o sexagésimo quarto quadro18.

#include <iostream>
using namespace std;

int main() {
    unsigned long long soma = 0;
    for (unsigned long long  i=1, c = 1;c <= 64; i*=2, c++) {
        soma += i;
        cout << "Trigo colocado no " << c << "º Quadro." << endl;
        cout << "Quantidade de graos no quadro: " << i << endl;
        cout << "Soma total de graos: " << soma << endl;
    }
    return 0;
}