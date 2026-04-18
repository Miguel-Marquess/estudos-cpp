// j) Elaborar um programa que apresente os valores de conversão de graus Celsius em
// graus Fahrenheit, de dez em dez graus, iniciando a contagem em dez graus Celsius e
// finalizando em cem graus Celsius. O programa deve apresentar os valores das duas
// temperaturas.
#include <iostream>
using namespace std;

int main() {
    double fahrenheit = 50;
    for (int celsius = 10; celsius <=100;celsius+=10) {
        cout << "Celsius: " << celsius << endl;
        cout << "Fahrenheit: " << fahrenheit << endl;
        cout << "--------------------------" << endl;
        fahrenheit +=18;
    }
    return 0;
}