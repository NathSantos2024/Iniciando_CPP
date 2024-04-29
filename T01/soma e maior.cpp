//Criar um programa que compara três números e identifica o maior.

#include <iostream>

int main(){
//Declarando as variáveis:
double num1, num2, num3;

//Solicitando os números ao usuário:
std::cout<< "Digite o primeiro número:";
std::cin>> num1;

std::cout<< "Digite o segundo número:";
std::cin>> num2;

std::cout<< "Digite o terceiro número:";
std::cin>> num3;

//Comparando os números:
if (num1>num2 && num1>num3){
    std::cout<<"O maior número é: "<<num1<<std::endl;
}
else if (num2>num1 && num2>num3){
    std::cout<<"O maior número é: "<<num2<<std::endl;
}
else {
    std::cout<<"O maior número é: "<<num3<<std::endl;
}

return 0;
}