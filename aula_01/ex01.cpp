#include <iostream>

int main() {
    std::string nome;
    int idade;
    std::cout << "Digite seu nome: ", std::cin >> nome;
    std::cout << "Digite sua idade: ",std::cin >> idade;
    std::cout << "Seu nome é: " << nome << std::endl << "Sua idade é: " << idade << std::endl;
    return 0;
}