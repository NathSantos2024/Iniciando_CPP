//Criar um programa que pede uma palavra 
//que contenha letras e números e de tamanho mínimo 5 carateres.

#include <iostream>
#include <cctype> 
#include <string>

int main(){

//Declarando as variáveis:
std::string palavra;

//Solicitando ao usuário a palavra:
bool caracteres=true;
do{
    std::cout<<"Digite uma palavra-passe de 5 caracteres que contenha letras e números";
    std::cin>>palavra;

//Verificando se possui o tamanho mínimo de 5 caracteres:
if (palavra.length()<5){
    std::cout<<"A palavra-passe digitada não tem 5 caracteres. Tente novamente!"<<std::endl;
    continue;
}

//Verificando se contém letras e números:
for(char c : palavra){
    if(!std::isalnum(c)){
        caracteres=false;
        break;
    }
}

if(!caracteres){
    std::cout<<"A palavra-passe deve conter letras e números. Tente novamente!"<<std::endl;
}

} while (palavra.length() < 5 || !caracteres);
std::cout<<"Palavra-passe válida!"<<std::endl;

return 0;

}