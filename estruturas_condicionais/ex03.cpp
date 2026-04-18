#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Coloque o valor de x: ";
    cin >> x;
    cout << "Coloque o valor de y: ";
    cin >> y;
    if (x == 0 || y == 0) {
        cout << "Sobre o Eixo ou na Origem" << endl;
    }
    else if (x > 0) {
        if (y > 0) {
            cout << "1º Quadrante" << endl;
        }
        else {
            cout << "4º Quadrante" << endl;
        }
    }
    else {
        if (y > 0) {
            cout << "2º Quadrante" << endl;
        }
        else {
            cout << "3º Quadrante" << endl;
        }
    }
    return 0;
}

// 3 - Leia as coordenadas $x$ e $y$ (ponto no plano cartesiano).

//     Se $x > 0$ e $y > 0$: 1º Quadrante.
//     Se $x < 0$ e $y > 0$: 2º Quadrante.
//     Se $x < 0$ e $y < 0$: 3º Quadrante.
//     Se $x > 0$ e $y < 0$: 4º Quadrante.
//     Se $x = 0$ ou $y = 0$: Sobre o Eixo ou na Origem.