#include <iostream>

int main() {
    // Solicita ao usuário o número de elementos para calcular a média
    std::cout << "Digite a quantidade de numeros: ";
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

    // Solicita ao usuário os números e calcula a soma usando um loop while
    while (i <= quantidade) {
        double numero;
        std::cout << "Digite o numero " << i << ": ";
        std::cin >> numero;

        soma += numero;
        ++i;
    }

    // Calcula a média
    double media = soma / quantidade;

    // Exibe o resultado da média
    std::cout << "A media dos numeros fornecidos e: " << media << "\n";

    return 0;
}
