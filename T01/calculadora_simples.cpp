//Criar um programa que pede dois números 
//e depois pede que tipo de operação que quer fazer com esses números 
//(soma, subtração, multiplicação ou divisão) 
//e depois mostra o Resultado.

#include <iostream>

int main() {

    // Solicitando ao usuário dois números:
    std::cout << "Digite o primeiro numero: ";
    double numero1;
    std::cin >> numero1;

    std::cout << "Digite o segundo numero: ";
    double numero2;
    std::cin >> numero2;

    // Solicitando ao usuário a operação desejada:
    std::cout << "Escolha a operacao (soma, subtracao, multiplicacao ou divisao): ";
    std::string operacao;
    std::cin >> operacao;

    // Realizando a operação e exibindo o resultado:
    double resultado;
    if (operacao == "soma") {
        resultado = numero1 + numero2;
    } else if (operacao == "subtracao") {
        resultado = numero1 - numero2;
    } else if (operacao == "multiplicacao") {
        resultado = numero1 * numero2;
    } else if (operacao == "divisao") {
        // Verificando se o segundo número é diferente de zero:
        if (numero2 != 0) {
            resultado = numero1 / numero2;
        } else {
            std::cout << "Erro: Divisao por zero.\n";
            return 1;  // Retorna 1 para indicar um erro
        }
    } else {
        std::cout << "Operacao invalida. Escolha entre soma, subtracao, multiplicacao ou divisao.\n";
        return 1;  // Retorna 1 para indicar um erro
    }

    std::cout << "Resultado da " << operacao << ": " << resultado << "\n";

    return 0;
}
