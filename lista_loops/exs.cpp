// ) Elaborar um programa que apresente o resultado inteiro da divisão de dois números
// quaisquer, representando o dividendo e o divisor da divisão a ser processada. Sugestão:
// para a elaboração do programa, não utilize o operador aritmético de divisão com
// quociente inteiro div. Use uma solução baseada em laço. O programa deve apresentar
// como resultado (quociente) quantas vezes o divisor cabe no dividendo.
#include <iostream>
using namespace std;

int main () {
    int dividendo = 0, divisor = 0, c = 0, acumulador =0;
    cout << "Digite o dividendo: ";
    cin >> dividendo;
    cout << "Digite o divisor: ";
    cin >> divisor;
    while (acumulador != dividendo) {
        acumulador += divisor;
        c+=1;
    }
    cout << "Resultado: " << c << endl;
    return 0;
}