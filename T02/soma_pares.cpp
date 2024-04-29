#include <iostream>

int main() {
    // Solicita ao usuário um limite superior
    std::cout << "Digite um limite superior: ";
    int limite;
    std::cin >> limite;

    // Inicializa a variável de soma
    int soma = 0;

    // Inicializa o primeiro número par
    int numeroPar = 0;

    // Realiza a soma dos números pares até o limite usando um loop while
    while (numeroPar <= limite) {
        soma += numeroPar;
        numeroPar += 2;
    }

    // Exibe o resultado da soma
    std::cout << "A soma dos numeros pares ate " << limite << " e: " << soma << "\n";

    return 0;
}
