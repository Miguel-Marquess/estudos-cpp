#include <iostream>

int main() {
    float c;
    std::cout << "Digite um valor em Celsius: ", std::cin >> c;
    std::cout << "O valor em Fahrenheit é: " << (c * 1.8) + 32 << std::endl;
    return 0;
}