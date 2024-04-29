//Criar um programa que verifica se o número 
//é maior, menor ou igual a zero.

#include <iostream>

int main(){
//Declarando as variáveis:
int num;

//Solicitando o número ao usuário:
std::cout<< "Digite o número:";
std::cin>> num;

//Verificando se é maior, menor ou igual a zero:
if (num>0){
    std::cout<<"O número "<<num<<" é maior que zero!"<<std::endl;
}
else if (num<0){
    std::cout<<"O número "<<num<<" é menor que zero!"<<std::endl;
}
else {
    std::cout<<"O número digitado é igual a zero!"<<std::endl;
}

return 0;
}