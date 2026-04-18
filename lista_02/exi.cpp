#include <iostream>
using namespace std;

int main() {
    double c, v, maior, menor;
    for (int i=0;i<5;i++) {
        cout << "Digite um valor: ";
        cin >> v;
        c+=1;
        if (c == 1) {
            maior = v;
            menor = v;
        }
        else {
            if (v < menor) {
                menor = v;
            }
            else {
                if (v > maior) {
                    maior = v;
                }
            }
        }
    }
    cout << "O maior valor é: " << maior << endl << "O menor valor é: " << menor << endl;
    return 0;
}