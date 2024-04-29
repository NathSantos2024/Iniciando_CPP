#include <iostream>

// Função para calcular a média dos elementos do vetor
void calcularMedia(int vetor[], int tamanho, double& media) {
    if (tamanho == 0) {
        std::cerr << "Erro: O vetor está vazio." << std::endl;
        return;
    }

    int soma = 0;

    // Solicita os números ao usuário e os armazena no vetor
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Digite o elemento " << i + 1 << " do vetor: ";
        std::cin >> vetor[i];
        soma += vetor[i];
    }

    media = static_cast<double>(soma) / tamanho;
}

int main() {
    const int tamanhoVetor = 5; // Tamanho fixo do vetor
    int meuVetor[tamanhoVetor]; // Vetor para armazenar os números
    double resultadoMedia;

    // Chama a função para calcular a média dos elementos do vetor
    calcularMedia(meuVetor, tamanhoVetor, resultadoMedia);

    // Exibe o resultado da média
    std::cout << "A média dos elementos do vetor é: " << resultadoMedia << std::endl;

    return 0;
}

