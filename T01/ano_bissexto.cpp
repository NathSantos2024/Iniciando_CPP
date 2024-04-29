//Criar um programa que verifica se um ano é bissexto.

#include <iostream>

int main(){

//Declarando as varáveis:
int ano;

//Solicitando ao usuário que digite um ano:
std::cout<<"Digite o ano: ";
std::cin>>ano;

//Para um ano ser bissexto ele deve ser divisível por 4
//*exceto nos anos que são divisíveis por 100 
//*a menos que também sejam divisíveis por 400

//Verificando se o ano é bissexto:
if ((ano%4==0 && ano%100!=0) || (ano%400==0)){
    std::cout<<"O ano "<<ano<< " é um ano bissexto!"<<std::endl;
}
else{
    std::cout<<"O ano "<<ano<< " não é um ano bissexto!"<<std::endl;
}

return 0;

}