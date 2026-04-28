#include <iostream>
using namespace std;

int main() {
    int cedulas[6], contador[6], valor;
    cedulas[0] = 100; cedulas[1] = 50; cedulas[2] = 20; cedulas[3] = 10; cedulas[4] = 5; cedulas[5] = 2;
    cout << "Insira um valor: ";
    cin >> valor;
    while (true) {
        for (int i=0; i<6;i++) {
            contador[i] = 0;
        }
        for(int i = 0; i < 6;i++) {
            while (cedulas[i] <= valor){
                valor-=cedulas[i];
                contador[i] += 1;
            }
        }
        if (valor > 0) {
            cout << "Esse valor nao pode ser retirado! Coloque valores nao terminados em 1 e 3: ";
            cin >> valor;
        }
        else {
            break;
        }
    }
    cout << "Cedulas retiradas: " << endl;
    for (int i = 0; i < 6;i++) {
        cout << "R$" << cedulas[i] << ": " << contador[i] << endl;
    }
    return 0;
}






