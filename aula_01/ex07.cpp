#include <iostream>

int main() {
    float v;
    std::cout << "Digite um valor para desconto: ", std::cin >> v;
    std::cout << "O valor com 10% de desconto é: " << v - (v * 10/100)<< std::endl;
    return 0;
}