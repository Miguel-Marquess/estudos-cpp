#include <iostream>
// 8. Crie um programa que troque os valores de duas variáveis A e B.
int main() {
    std::string n1, n2, valor1;
    std::cout << "Digite algo pra n1: ", std::cin >> n1; 
    std::cout << "Digite algo pra n2: ", std::cin >> n2; 
    valor1 = n1;
    n1 = n2; 
    n2 = valor1;
    std::cout << "n2 é: " << n2 <<std::endl << "n1 é: " << n1 << std::endl;
    return 0;
}