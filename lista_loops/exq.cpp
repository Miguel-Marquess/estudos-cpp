// q) Escrever um programa que possibilite calcular a área total em metros de uma residência
// com os cômodos sala, cozinha, banheiro, dois quartos, área de serviço, quintal,
// garagem, entre outros que podem ser fornecidos ao programa. O programa deve
// solicitar a entrada do nome, da largura e do comprimento de um determinado cômodo.
// Em seguida, deve apresentar a área do cômodo lido e também uma mensagem
// solicitando ao usuário a confirmação de continuar calculando novos cômodos. Caso o
// usuário responda “NÃO”, o programa deve apresentar o valor total acumulado da área
// residencial.

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    float area_total = 0;
    while (true) {
        string nome;
        float largura = 0, comprimento = 0;
        cout << "Digite o nome do comodo: ";
        cin >> nome;
        cout << "Digite a largura do comodo: ";
        cin >> largura;
        cout << "Digite o comprimento do comodo: ";
        cin >> comprimento;
        cout << "Area total do comodo [" << nome << "]: " << largura*comprimento << " metros" << endl;
        area_total +=(largura*comprimento);
        char continuar;
        while (true){
            cout << "Quer adicionar mais(s/n): " << endl;
            cin >> continuar;
            continuar = tolower(continuar);
            if (continuar == 's' || continuar == 'n') {
                break;
            }
            else {
                cout << "Digite uma opção valida." << endl;
            }
        }
        if (continuar == 'n') {
            cout << "Area total da residencia: " << area_total << " metros" << endl;
            break;
        }
    }
    return 0;
}