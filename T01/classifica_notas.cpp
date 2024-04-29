//Criar um programa que faça a conversão de notas de 0 a 20. 
//0 a 5(fraco) 
//6 a 9 (insuficiente)
//10 a 14 (suficiente)
//15 a 18 (Bom) 
//19 e 20 (Excelente)

#include <iostream>

int main() {

    // Solicitando ao usuário uma nota de 0 a 20:
    std::cout << "Digite a nota (de 0 a 20): ";
    int nota;
    std::cin >> nota;

    // Convertendo a nota:
    if (nota >= 0 && nota <= 5) {
        std::cout << "Classificacao: Fraco\n";
    } else if (nota >= 6 && nota <= 9) {
        std::cout << "Classificacao: Insuficiente\n";
    } else if (nota >= 10 && nota <= 14) {
        std::cout << "Classificacao: Suficiente\n";
    } else if (nota >= 15 && nota <= 18) {
        std::cout << "Classificacao: Bom\n";
    } else if (nota >= 19 && nota <= 20) {
        std::cout << "Classificacao: Excelente\n";
    } else {
        std::cout << "Nota invalida. Digite uma nota de 0 a 20.\n";
    }

    return 0;
}
