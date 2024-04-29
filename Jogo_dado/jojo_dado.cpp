#include <iostream>
#include <string>

int main() {
    // Solicita ao usuário o nome
    std::cout << "Digite seu nome: ";
    std::string nome;
    std::cin >> nome;

    // Inicializa o saldo inicial e o número de acertos
    int saldo = 100;
    int acertos = 0;

    // Loop principal do jogo
    while (saldo > 0) {
        // Gera um número aleatório entre 3 e 18
        int numeroAleatorio = std::rand() % 16 + 3;

        // Solicita ao usuário fazer o lançamento do dado 3 vezes
        std::cout << "\nLancamento do dado:\n";
        int lancamento;
        for (int i = 1; i <= 3; ++i) {
            do {
                std::cout << "Lancamento " << i << ": ";
                std::cin >> lancamento;

                // Verifica se o número está no intervalo desejado
                if (lancamento < 3 || lancamento > 18) {
                 std::cout << "Por favor, escolha um numero entre 3 e 18.\n";
                }
            } while (lancamento < 3 || lancamento > 18);

            // Verifica se o usuário acertou
            if (lancamento == numeroAleatorio) {
                std::cout << "Parabens! Voce acertou e ganhou 10 pontos.\n";
                saldo += 10;
                ++acertos;
            } else {
                std::cout << "Voce errou e perdeu 20 pontos.\n";
                saldo -= 20;
            }
        }

        // Mostra o saldo atual
        std::cout << "Saldo atual: " << saldo << " pontos\n";

        // Verifica se o saldo acabou
        if (saldo <= 0) {
            std::cout << "\nSeu saldo acabou. O jogo foi encerrado.\n";
            break;
        }

        // Pede ao usuário para continuar ou sair
        char opcao;
        do {
            std::cout << "Deseja continuar (c) ou sair (s)? ";
            std::cin >> opcao;

            // Verifica se a opção é válida
            if (opcao != 'c' && opcao != 'C' && opcao != 's' && opcao != 'S') {
                std::cout << "Opcao invalida. Digite 'c' para continuar ou 's' para sair.\n";
            }
        } while (opcao != 'c' && opcao != 'C' && opcao != 's' && opcao != 'S');

        // Verifica a opção escolhida
        if (opcao == 's' || opcao == 'S') {
            break;
        }
    }

    // Verifica se o número de acertos é maior ou igual a 2 e duplica o saldo
    if (acertos >= 2) {
        saldo *= 2;
    }

    // Exibe uma mensagem de agradecimento com o nome do jogador
    std::cout << "\nObrigado por ter jogado, " << nome << "!\n";
    std::cout << "Seu saldo final: " << saldo << " pontos\n";

    return 0;
}
