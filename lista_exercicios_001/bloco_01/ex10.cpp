#include <iostream>

int main() {
    int n;
    std::cout << "Digite um numero: ", std::cin >> n;
    std::cout << "O sucessor é: " << n + 1 << std::endl;
    std::cout << "O antecessor é: " << n - 1 << std::endl;
    return 0;
}