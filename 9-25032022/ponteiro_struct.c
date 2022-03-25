/*
Programa para cadastrar clientes com os 
seguintes dados: Nome, idade, email
*/
#include<stdio.h>
#include<stdlib.h>

void main(){

    char nome[30];

    struct cliente{
        char nome[30];
        char email[100];
        int idade;
    };

    struct cliente novoCliente,*pNovoCliente;
    pNovoCliente = &novoCliente;

    printf("Entre com o nome do cliente:");
    scanf("%s",&pNovoCliente->nome); 

    printf("Entre com o email do cliente:");
    scanf("%s",&pNovoCliente->email);

    printf("Entre com a idade do cliente:");
    scanf("%d",&pNovoCliente->idade); 

    printf("O nome do cliente é %s",pNovoCliente->nome);
    
}