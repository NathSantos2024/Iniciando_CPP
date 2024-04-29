#include <iostream>
using namespace std;

// Função que lança aleatoriamente uma das faces da moeda
string lancaMoeda() {
    return (rand() % 2 == 0) ? "cara" : "coroa";
}

int main() {
    string resposta, aposta, saida;

    cout << "Quer jogar, Cara ou Coroa? (sim/não)" << endl;
    cin >> resposta;

    if (resposta == "sim") {
        cout << "Qual a sua aposta? (Cara/Coroa)" << endl;
        cin >> aposta;

        saida = lancaMoeda();
        cout << "Moeda Lançada......" << endl;
        cout << "Saiu " << saida << endl;

        if (aposta == saida) {
            cout << "Parabéns! Você ganhou a aposta!" << endl;
        } else {
            cout << "Que pena! Você perdeu!" << endl;
        }
    } else {
        cout << "Ok, até mais!" << endl;
    }

    return 0;
}