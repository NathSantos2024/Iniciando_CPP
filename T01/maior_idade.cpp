//Criar um programa que verifica se é maior de idade ou não.

#include <iostream>

int main(){

//Declarando as varáveis:
int idade;

//Solicitando ao usuário que digite a idade:
std::cout<<"Digite a idade: ";
std::cin>>idade;

//Verificando se a pessoa é maior de idade:
//Considerando a idade mínima de 18 anos!
if (idade>=18){
    std::cout<<"É maior de idade!"<<std::endl;
}
else{
    std::cout<<"Não é maior de idade!"<<std::endl;
}

return 0;

}