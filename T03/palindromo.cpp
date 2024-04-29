#include <iostream>
#include <cctype>

// Função para verificar se uma string é um palíndromo
bool isPalindrome(const std::string& str) {
    // Limpa a string, removendo caracteres não alfanuméricos e convertendo para minúsculas
    std::string cleanedStr;
    for (char ch : str) {
        if (std::isalnum(ch)) {
            cleanedStr += std::tolower(ch);
        }
    }

    // Cria uma versão invertida da string limpa
    std::string reversedStr(cleanedStr.rbegin(), cleanedStr.rend());

    // Retorna true se a string original é igual à sua versão invertida, indicando um palíndromo
    return cleanedStr == reversedStr;
}

int main() {
    std::string input;

    // Solicita ao utilizador que escreva uma string
    std::cout << "Escreva uma string para verificar se é um palíndromo: ";
    std::getline(std::cin, input);

    // Limpa a entrada removendo caracteres não alfanuméricos e convertendo para minúsculas
    std::string cleanedInput;
    for (char ch : input) {
        if (std::isalnum(ch)) {
            cleanedInput += std::tolower(ch);
        }
    }

    // Chama a função isPalindrome para verificar se é um palíndromo
    if (isPalindrome(cleanedInput)) {
        std::cout << "A string \"" << input << "\" e um palindromo.\n";
    } else {
        std::cout << "A string \"" << input << "\" nao e um palindromo. ";
        std::cout << "\"" << input << "\" e diferente de \"" << std::string(cleanedInput.rbegin(), cleanedInput.rend()) << "\".\n";
    }

    return 0;
}



