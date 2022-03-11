#include <stdio.h> //biblioteca standard de Input/Output
int main() 
{ 
    char car;                                //declara var. car do tipo char
    printf("Digite um caractere e ENTER\n"); //mostra na tela
    scanf("%c", &car);                       //%c para ler ou mostrar char 1 char 
    printf("caractere digitando e'%c\n", car);
    return 0;
}
    //mostrou na tela valor de car lido
  //fim main 