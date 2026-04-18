// r) Elaborar um programa que leia valores positivos inteiros até que um valor negativo seja
// informado. Ao final devem ser apresentados o maior e o menor valores informados pelo
// usuário.
#include <iostream>
using namespace std;

int main () {
    int maior = 0, menor = 0, c = 0;
    while (true) {
        int n;
        cout << "Digite um numero: ";
        cin >> n;
        c+=1;
        if (c == 1) {
            maior = n;
            menor = n;
        }
        else {
            if (n < menor) {
                menor = n;
            }
            else if (n > maior){
                maior = n;
            }
        }
        char continuar;
        while (true){
            cout << "Quer continuar(s/n): ";
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
            break;
        }
    }
    cout << "Maior: " << maior << endl << "Menor: "  << menor << endl;
    return 0;
}