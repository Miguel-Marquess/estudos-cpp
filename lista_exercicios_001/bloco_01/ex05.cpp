#include <iostream>

int main() {
    int n1, n2; /// se quer divisao inteira, define as variaveis como int, se quer divisao real, usa float ou double.
    std::cout << "Digite um numero: ";
    std::cin >> n1;
    std::cout << "Digite um numero: ";
    std::cin >> n2;
    std::cout << "A divisao inteira é: " << n1 / n2 << std::endl;
    return 0;
}
