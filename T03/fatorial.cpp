#include <iostream>
#include <limits> // Para acessar as propriedades numéricas de tipos de dados

// Função recursiva para calcular o fatorial
unsigned long long calcularFatorial(int n) {
    // Caso base: fatorial de 0 é 1
    if (n == 0) {
        return 1;
    }

    // Se n for negativo, retorna 0 (ou o valor máximo suportado pelo tipo de retorno)
    if (n < 0) {
        // Verifica se o tipo de retorno é suficientemente grande para armazenar o valor
        if (std::numeric_limits<unsigned long long>::max() < 0) {
            // Se o tipo de retorno for um inteiro com sinal, retorna 0
            return 0;
        } else {
            // Caso contrário, retorna o valor máximo suportado pelo tipo de retorno
            return std::numeric_limits<unsigned long long>::max();
        }
    }

    // Caso recursivo: n! = n * (n-1)!
    return n * calcularFatorial(n - 1);
}

int main() {
    // Variável para armazenar o número fornecido pelo usuário
    int numero;

    // Solicita ao usuário que escreva o número para calcular o fatorial
    std::cout << "Digite o numero para calcular o fatorial: ";
    std::cin >> numero;

    // Calcula o fatorial do número fornecido pelo usuário
    unsigned long long resultadoFatorial = calcularFatorial(numero);

    // Exibe o resultado
    std::cout << "O fatorial de " << numero << " e: " << resultadoFatorial << std::endl;

    return 0;
}
