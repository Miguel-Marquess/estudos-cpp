#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n[3], delta, r1, r2;
    for (int i=0; i < 3; i++) {
        cout << "Digite um numero: ";
        cin >> n[i];
        if (n[i] == 0) {
            cout << "Valor igual a 0! Não é permitido!" << endl;
            return 0;
        }
    }
    delta = (n[1]*n[1]) - (4 * n[0] * n[2]);
    if (delta < 0) {
        cout << "Nao existe solução real!" << endl;
    }
    else {
        double b_negativo = -(n[1]);
        if (delta > 0){
            delta = sqrt(delta);
            r1 = (b_negativo + delta) / (2 * n[0]);
            r2 = (b_negativo - delta) / (2 * n[0]);
            cout << "Primeira raiz: " << r1 << endl << "Segunda raiz: " << r2 << endl; 
        }
        else {
            cout << "Unica solução para delta 0: " << (b_negativo)/(2*n[0]) << endl;
        }
    }
    return 0;
} 