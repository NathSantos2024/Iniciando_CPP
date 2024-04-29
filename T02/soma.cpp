#include <iostream>

int main() {
    // Solicita ao usuário a quantidade de números a serem inseridos
    std::cout << "Digite a quantidade de numeros a calcular a soma: ";
    int quantidade;
    std::cin >> quantidade;

    // Verifica se a quantidade é válida
    if (quantidade <= 0) {
        std::cout << "Quantidade invalida. Digite um numero maior que zero.\n";
        return 1;  // Retorna 1 para indicar um erro
    }

    // Inicializa a variável para armazenar a soma
    double soma = 0;

    // Inicializa a variável de controle do loop
    int i = 1;

    // Solicita ao usuário cada número e calcula a soma usando um loop while
    while (i <= quantidade) {
        double numero;
        std::cout << "Digite o numero " << i << ": ";
        std::cin >> numero;

        soma += numero;
        ++i;
    }

    // Exibe o resultado da soma
    std::cout << "A soma dos numeros inseridos e: " << soma << "\n";

    return 0;
}
