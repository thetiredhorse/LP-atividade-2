#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");

int opcao;

printf(" escolha o codigo do produto \n\n");
printf("1 - camiseta \n");
printf("2 -calça \n");
printf("3 - sapato \n\n");


printf("escolha um codigo: ");
scanf("%d",&opcao);


switch (opcao) {
case 1: 
printf("produto escolhido - camiseta \n");
printf("preço: R$22,00");
break;
case 2: 
printf("produto escolhido - calça \n");
printf("preço: R$58,00");
break;
case 3: 
printf("produto escolhido - sapato \n");
printf("preço: R93,00");
break;
default:
printf("opção errada");
break; }


return 0;	
}
