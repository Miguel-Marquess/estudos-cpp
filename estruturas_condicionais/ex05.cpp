#include <iostream>
using namespace std;

int main() {
    double peso, altura;
    cout << "Digite seu peso: ";
    cin >> peso;
    cout << "Calcule a altura (em metros): ";
    cin >> altura;
    double imc = peso/(altura*altura);
    if (imc < 18.5) {
        cout << "Abaixo do peso!" << endl;
    }
    else if (imc <= 24.9) {
        cout << "Peso normal" << endl;
    }
    else if (imc <=29.9) {
        cout << "Sobrepeso" << endl;
    }
    else {
        cout << "Obesidade" << endl;
    }
    return 0;
}

// Peso: 50 | Altura: 1.70 → Abaixo do peso (~17.3)
// Peso: 65 | Altura: 1.70 → Peso normal (~22.5)
// Peso: 75 | Altura: 1.70 → Sobrepeso (~25.9)
// Peso: 95 | Altura: 1.70 → Obesidade (~32.9)