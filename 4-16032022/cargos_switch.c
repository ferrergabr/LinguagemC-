/*Programa para exibir o salario do cargo 
de acrodo com a escolha do usuário*/ 
#include <stdio.h>


int main(){

    int opcao = 0;

    //comando para limpar a tela 
    system("clear");//clear screen (limpar tela)
    printf("###################################################");
    printf("\n#\t Programa para exibir salario\t\t\t#\n");
    printf("###################################################\n");
    printf("\nEscolha um dos cargos abaixo digitando o número correspondente\n");
    printf("\t1 - Diretor\n");
    printf("\t2 - Gerente\n");
    printf("\t3 - Analista\n");
    printf("\t4 - Assistente\n");
    printf("\t5 - Auxiliar\n");
    printf("-----------------------------------------------\n");
    
    scanf("%d", &opcao);

    switch(opcao){
       case 1: 
       printf("O salário do Diretor é 15.000,00");
       break;
       case 2: 
       printf("O salário do Gerente é 12.000,00");
       break;
       case 3:
       printf("O salário do Analista é 8,000,00");
       break;
       case 4:
       printf("O salário do Assistente é 4,000.00");
       break;
       case 5:
       printf("O salário do Auxiliar é 2,000.00");
       break;

       default:
           printf("Não há salário");
       break; 

    } 


    
    return 0;

}