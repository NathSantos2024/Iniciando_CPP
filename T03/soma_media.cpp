#include <iostream>

// Função para somar dois números inteiros
int somarNumeros(int numero1, int numero2) {
    return numero1 + numero2;
}

// Função para calcular a média de dois números inteiros
double calcularMedia(int numero1, int numero2) {
    return (numero1 + numero2) / 2.0;
}

// Função para exibir o menu e obter a escolha do usuário
char exibirMenu() {
    char opcao;
    std::cout << "Escolha uma opcao:\n";
    std::cout << "1. Somar os numeros\n";
    std::cout << "2. Calcular a media dos numeros\n";
    std::cout << "Opcao: ";
    std::cin >> opcao;
    return opcao;
}

// Função principal
int main() {
    int numero1, numero2;
    
    // Solicita ao usuário os dois números
    std::cout << "Digite o primeiro numero: ";
    std::cin >> numero1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> numero2;
    
    // Exibe o menu e obtém a escolha do usuário
    char opcao = exibirMenu();
    
    // Executa a operação selecionada pelo usuário
    if (opcao == '1') {
        int resultado = somarNumeros(numero1, numero2);
        std::cout << "A soma de " << numero1 << " e " << numero2 << " e: " << resultado << std::endl;
    } else if (opcao == '2') {
        double resultado = calcularMedia(numero1, numero2);
        std::cout << "A media de " << numero1 << " e " << numero2 << " e: " << resultado << std::endl;
    } else {
        std::cout << "Opcao invalida. Encerrando o programa.\n";
    }
    
    return 0;
}

