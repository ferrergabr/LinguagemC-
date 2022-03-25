/*
Programa de desvio de Fluxo
*/

#include <stdio.h>
#include <stdlib.h>
void main(){
    char nome[30];
    int idade, bemAlimentado, resfriado;
    float peso;
    printf("informe o nome:");
    scanf("%s", &nome);
    printf("informe o peso:");
    scanf("%f", &peso);
    printf("informe a idade");
    scanf("%d", &idade);
    printf("Esta bem alimentado? <1-SIM / 0-NAO>");
    scanf("%d", &bemAlimentado);
    printf("Esta resfriado? <1-SIM / 0-NAO>");
    scanf("%d", &resfriado);
    if (peso >= 50 && (idade >=16 && idade <=69)
    && bemAlimentado && !resfriado)
    printf("O voluntário $s esta apto!", nome);
    else 
    printf("O voluntário %s NAO esta apto", nome);
    
        
    }
    
