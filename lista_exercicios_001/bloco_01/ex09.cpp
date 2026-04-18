#include <iostream>
// conversão de Horas: Receba um valor em horas e converta para minutos e segundos
int main() {
    int horas;
    std::cout << "Quantas horas são: ";
    std::cin >> horas;
    int minutos = horas*60;
    std::cout << "O valor em minutos é: " << minutos << " minutos" << std::endl;
    std::cout << "O valor em segundos é: " << minutos*60 << " segundos" << std::endl;
    return 0;
}