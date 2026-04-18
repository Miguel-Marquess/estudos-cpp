#include <iostream> 
// 4. Receba um número e informe se é par ou ímpar (Dica: use o operador %).
int main() {
    int n;
    std::cout << "Digite um valor: ", std::cin >> n;
    if (n % 2 > 0) { // ou podia user n % 2 == 0
        std::cout << "O numero é impar!" <<std::endl;
    }
    else { 
        std::cout << "O numero é par!" << std::endl;
    }
    return 0;
}