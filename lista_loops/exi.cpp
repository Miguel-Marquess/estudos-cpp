// i) Escrever um programa que apresente os valores da sequência numérica de Fibonacci
// até o décimo quinto termo. A sequência de Fibonacci é formada pelos valores numéricos
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc., obtendo-se o próximo termo a
// partir da soma do termo a com o anterior sucessivamente até o infinito se a
// sequência não for interrompida, sendo determinada a partir da fórmula Fn = Fn-1 + Fn-2.

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, proximo;  
    cout << a << " " << b << " ";  
    for (int i = 3; i <=15;i++) {
        proximo = a + b;
        cout << proximo << " ";
        a = b;
        b = proximo;
    }
    cout << "" << endl;
    return 0;
}





