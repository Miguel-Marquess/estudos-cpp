#include <iostream>
#include <iomanip> //<iomanip> lib pra limitar casas decimais
int main() {
    float n[3]; //cria 3 lugares na memoria
    float valores;
    // define variavel, condicao, oque faz com a variavel
    for (int i=0; i <3; i++) {
        std::cout << "Digite um numero: ";
        std::cin >> n[i];
        valores+=n[i];
    }
    std:: cout << std::fixed << std::setprecision(2); //limita as casas decimais
    std::cout << "A media entre eles é: " << valores/3 <<std::endl;
    return 0;
}