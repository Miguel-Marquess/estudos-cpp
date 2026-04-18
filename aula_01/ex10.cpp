#include <iostream>
// Leia o salário de um funcionário e calcule o novo salário com 15% de aumento.
int main() {
    float salario;
    std::cout << "Digite seu salario para colocar aumento: ", std::cin >> salario;
    float novo_salario;
    novo_salario = salario + (salario * 15/100);
    std::cout << "O seu novo salario é: " << novo_salario << std::endl;
    return 0;
}