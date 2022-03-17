/*Programa para cacular os salarios de seus respectivos cargos*/

#include <stdio.h>

int main(){
char cargo [15];
printf("Digite o seu cargo e tecle ENTER\n");
scanf("%s",cargo);

if(cargo == "Diretor"){

printf("O salário do diretor é R$ 15.000,00"); 
}
else if (cargo == "Gerenterente"){
    printf("O salário do gerente é 12.000,00");
}
else if (cargo == "Analista"){
    printf("O salário do analista é 8.000,00");
}
else if (cargo == "Assistente"){
    printf("O salário do assistente é 4.000,00");
}
else if (cargo == "Auxiliar"){
    printf("O salário do auxiliar é de 2.000,00");
}
else{
    printf("Não há salário");
}
return 0; 
} 