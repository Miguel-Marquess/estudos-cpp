#include <iostream>
using namespace std;

double salario_imposto(double salario, double perc) {
    return salario + (salario * perc/100);
}

int main() {
    double salario;
    cout << "Digite seu salario: ";
    cin >> salario;
    if (salario <= 2259) {
        cout << "Isento de impostos!" << endl;
    }
    else if (salario >= 2259.01 && salario <= 3751) {
        cout << "Seu salario com 7,5% de impostos: R$" << salario_imposto(salario, 7.5) << endl;
    }
    else if (salario >= 3751.01 && salario <= 4664){
        cout << "Seu salario com 15% de impostos: R$" << salario_imposto(salario, 15) << endl;
    }
    else {
        cout << "Seu salario com 22,5% de impostos: R$" << salario_imposto(salario, 22.5) << endl;
    }
    return 0;
}

// 2 - Leia o salário bruto de uma pessoa e calcule o imposto devido:

//     Até R$ 2.259: Isento.
//     De R$ 2.259,01 até R$ 3.751: 7,5% sobre o salário.
//     De R$ 3.751,01 até R$ 4.664: 15% sobre o salário.
//     Acima de R$ 4.664: 22,5% sobre o salário.
//     Saída: Mostre o salário bruto, o valor do imposto e o salário líquido (bruto - imposto).