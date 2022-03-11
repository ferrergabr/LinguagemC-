#include <stdio.h> //biblioteca de standard de Input/Output
int main()
{ 
int n1,n2,soma,sub,div,mut;             //declaração var n1 e n2 inteira 

printf("Digite um valor inteiro e ENTER;/n");      //mostrar na tela 
scanf("%d", &n1);                                  //ler o primeiro número
printf("Digite um segundo valor e ENTER");         //mostrar na tela 
scanf("%d", &n2);                                  //ler o segundo número, NAO digitar NADA entre eles

soma = n1 + n2; 
printf("\nValor da soma é: %d\n,", soma);          //soma 
sub = n1 - n2;
printf("\nValor da subtração: %d\n,", sub);        //subtração 
mut = n1 * n2;
printf("\nValor da subtração: %d\n,", mut);        //multipliacação 
div = n1 / n2;
printf("\nValor da divisão: %d\n", div);           //divisão 
return 0;

}   //fim 
