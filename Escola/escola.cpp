#include <iostream>
#include <vector>  // biblioteca usada para armazenar os alunos em uma lista dinâmica
#include <iomanip> // permite manipular a formatação de saída,  
                   // usada aqui para formatar a média da turma com std::setprecision
#include <limits>  // biblioteca para acessar as propriedades numéricas de tipos de dados, 
                   // para lidar com entradas inválidas do usuário com std::numeric_limits


// Define uma estrutura Aluno com: nome, idade e notaFinal
struct Aluno {
    std::string nome;
    int idade;
    double notaFinal;
};

// Declara função para adicionar um novo aluno à lista
void adicionarAluno(std::vector<Aluno> &listaAlunos) {
    Aluno novoAluno;
    //solicita e armazena o nome e a idade do aluno.
    std::cout << "Digite o nome do aluno: ";
    std::cin >> novoAluno.nome;

    // Limpa o buffer de entrada após a leitura do nome
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Digite a idade do aluno: ";
    std::cin >> novoAluno.idade;

    // Limpa o buffer de entrada após a leitura da idade
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Verifica se a entrada da nota final é um número
    std::cout << "Digite a nota final do aluno: "; 
    //pede a nota final do aluno, mas verifica se a entrada do usuário é um número.
    while (!(std::cin >> novoAluno.notaFinal)) {
        std::cout << "Entrada invalida. Por favor, digite um numero para a nota final: ";
        std::cin.clear(); // Limpa o estado de erro do stream
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta entrada inválida
    }
    
    listaAlunos.push_back(novoAluno);
}

// Declara a função para mostrar a lista de alunos
void mostrarListaAlunos(const std::vector<Aluno>& listaAlunos) {
    std::cout << "\nLista de Alunos:\n";
    for (const auto& aluno : listaAlunos) {
        std::cout << "Nome: " << aluno.nome << ", Idade: " << aluno.idade << ", Nota Final: " << aluno.notaFinal << std::endl;
    }
}

// Declara a função para calcular e mostrar a média da turma
void calcularMediaTurma(const std::vector<Aluno>& listaAlunos) {
    if (listaAlunos.empty()) {
        std::cout << "\nNao ha alunos na lista para calcular a media.\n";
        return;
    }
    //calcula e exibe a média da turma com base nas notas finais dos alunos
    //Verifica se a lista de alunos está vazia e, se estiver, exibe uma mensagem de erro
    double somaNotas = 0;
    for (const auto& aluno : listaAlunos) {
        somaNotas += aluno.notaFinal;
    }
    double mediaTurma = somaNotas / listaAlunos.size();
    std::cout << "\nMedia da Turma: " << std::setprecision(2) << std::fixed << mediaTurma << std::endl;
}

// Declara a função para mostrar a pauta de notas
void mostrarPautaNotas(const std::vector<Aluno>& listaAlunos) {
    if (listaAlunos.empty()) {
        std::cout << "\nNao ha alunos na lista para mostrar a pauta de notas.\n";
        return;
    }
    //exibe a pauta de notas com o nome e a nota final de cada aluno
    //verifica se a lista de alunos está vazia
    std::cout << "\nPauta de Notas:\n";
    for (const auto& aluno : listaAlunos) {
        std::cout << "Nome: " << aluno.nome << ", Nota Final: " << aluno.notaFinal << std::endl;
    }
}

int main() {
    std::vector<Aluno> listaAlunos; // Vetor para armazenar os alunos
    char opcao;

    // Loop principal do programa
    while (true) {
        // Exibe o menu de opções
        std::cout << "\nMenu:\n";
        std::cout << "1. Adicionar novo aluno\n";
        std::cout << "2. Mostrar lista de alunos\n";
        std::cout << "3. Calcular media da turma\n";
        std::cout << "4. Mostrar pauta de notas\n";
        std::cout << "5. Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        // Verifica a opção escolhida pelo usuário
        if (opcao == '1') {
            adicionarAluno(listaAlunos);
        } else if (opcao == '2') {
            mostrarListaAlunos(listaAlunos);
        } else if (opcao == '3') {
            calcularMediaTurma(listaAlunos);
        } else if (opcao == '4') {
            mostrarPautaNotas(listaAlunos);
        } else if (opcao == '5') {
            std::cout << "Saindo do programa.\n";
            break; // Sai do loop e encerra o programa
        } else {
            std::cout << "Opcao invalida. Tente novamente.\n";
        }
    }

    return 0;
}