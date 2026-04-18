#include <iostream>
using namespace std;

int main() {
    double n[3];
    for (int i = 0; i<3; i++) {
        cout << "Digite um valor: ";
        cin >> n[i];
    }
    if (n[0] + n[1] <= n[2] || n[1] + n[2] <= n[0] || n[0] + n[2] <= n[1]){
        cout << "Nao forma um triangulo" << endl;
    }
    else if (n[0] == n[1] && n[1] == n[2]) {
        cout << "Triangulo Equilatero" << endl;
    }
    else if (n[0] == n[1] || n[1] == n[2] || n[0] == n[2]) {
        cout << "Triangulo Isosceles" << endl;
    }
    else {
        cout << "Triangulo Escaleno" << endl;
    }
    return 0;
}

// 4 - Triângulo válido e classificação. Leia três valores e verifique se eles podem formar um triângulo.
// Se puder formar, classifique em:
// • Equilátero: 3 lados iguais
// • Isósceles: 2 lados iguais
// • Escaleno: 3 lados diferentes
// Se não puder formar, informe "Não forma triângulo".