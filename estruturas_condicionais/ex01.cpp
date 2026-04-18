#include <iostream>
using namespace std;

int main() {
    int idade;
    double peso;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Digite seu peso: ";
    cin >> peso;
    if (idade < 12) {
        cout << "Não é permitida a entrada!" << endl;
    }
    else if (idade >= 12 && idade <= 17){
        cout << "Juvenil" << endl;
    }
    else if (idade >= 18){
        if (peso <= 75){
            cout << "Adulto Leve" << endl;
        }
        else {
            cout << "Adulto Pesado" << endl;
        }
    }
    return 0;
}
//1 - Receba a idade e o peso de um atleta. O programa deve determinar a categoria dele conforme as regras:

    // Juvenil: Idade entre 12 e 17 anos.
    // Adulto Leve: Idade >=18 anos e peso até 75kg.
    // Adulto Pesado: Idade >= 18 anos e peso acima de 75kg.
    // Não Permitido: Qualquer pessoa abaixo de 12 anos.