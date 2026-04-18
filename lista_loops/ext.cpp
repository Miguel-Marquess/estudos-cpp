
// t) Elaborar um programa que apresente os quadrados sem armazená-los na memória dos
// valores inteiros existentes na faixa de valores de 15 a 200 com saltos de 3 em 3.]
#include <iostream>
using namespace std;

int main ()  {
    for (int i = 15; i<=200;i+=3) {
        cout << i << "² = " << i*i << endl;
    }
    return 0;
}