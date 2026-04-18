// g) Elaborar um programa que apresente os resultados das potências do valor de base 3,
// elevado a um expoente que varie do valor 0 até o valor 15. O programa deve apresentar
// os valores 1, 3, 9. 27, ..., 14.348.907. Sugestão: leve em consideração as definições
// matemáticas do cálculo de potência, em que qualquer valor numérico diferente de zero
// elevado a zero é 1, e todo valor numérico elevado a 1 é ele próprio. Não use o operador
// aritmético de exponenciação apresentado no Capítulo 3; resolva o problema com a
// técnica de laço.

#include <iostream>
using namespace std;

int main() {
    int valor = 1;
    for (int i=0;i <=15; i++) {
        cout << valor << endl;
        valor *= 3;
    }
    return 0;
}