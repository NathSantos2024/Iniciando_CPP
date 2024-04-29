#include <iostream>

int main() {
    // Solicita ao usuário três números
    std::cout << "Digite o primeiro numero: ";
    double numero1;
    std::cin >> numero1;

    std::cout << "Digite o segundo numero: ";
    double numero2;
    std::cin >> numero2;

    std::cout << "Digite o terceiro numero: ";
    double numero3;
    std::cin >> numero3;

    // Calcula a média
    double media = (numero1 + numero2 + numero3) / 3.0;

    // Exibe o resultado
    std::cout << "A media dos tres numeros e: " << media << "\n";

    return 0;
}
