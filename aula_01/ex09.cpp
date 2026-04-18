#include <iostream>

int main() {
    int n;
    std::cout << "Digite um numero: ", std::cin >>  n;
    std::cout << "O sucessor de N é: " << n+1 << std::endl << "E o antecessor é: " << n-1 << std::endl;
    return 0;
}