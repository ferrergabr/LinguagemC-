/*
Programa pede ao usuário que digite
o seu nome. Ao fazer sera alocado 
na variável nome
*/
#include <stdio.h>

int main(){
    
    char nome[30];

    printf("Digite o seu nome e tecle ENTER:\n");
    scanf("%s",nome); //Definição de caracteres que o usuário escolheu 
    printf("%s\n",nome);

    return 0; 
}