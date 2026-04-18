#include <iostream>
// 3. Calcule a média aritmética de quatro notas informadas pelo utilizador.
int main() {
    float a, b, c, d;
    std::cout << "Digite a nota 1: ", std::cin >> a;
    std::cout << "Digite a nota 2: ", std::cin >> b;
    std::cout << "Digite a nota 3: ", std::cin >> c;
    std::cout << "Digite a nota 4: ", std::cin >> d;
    std::cout << "A media das notas é: " << (a + b + c + d)/4 << std::endl;
    return 0;
}