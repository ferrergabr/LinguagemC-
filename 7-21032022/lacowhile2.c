/*
Programa para manter a tela sempre ativa. Caso 
o usuário digite 9, enta a tela sera liberada
*/
#include <stdio.h>

int main(){
    int op = 0;
    printf("Digite um nḿero para sair e tecle enter\n");
    scanf("%d",&op);
    while(op != 9){
        system("clear");
        printf("\n Você errou ...... !!!\n");

        printf("Tente outra vez e tecle enter\n");
        scanf("%d",&op);

    
    }
    return 0;
}