#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");

int opcao;

printf(" escolha uma linguagem \n\n");
printf("1 - ingl�s \n");
printf("2 - espanhol \n");
printf("3 - franc�s \n\n");


printf("escolha um idioma: ");
scanf("%d",&opcao);


switch (opcao) {
case 1: 
printf("idioma escolhido - ingl�s \n");
printf("welcome");
break;
case 2: 
printf("idioma escolhido - espanhol \n");
printf("bienvenido");
break;
case 3: 
printf("idioma escolhido - franc�s \n");
printf("accueillir");
break;
default:
printf("op��o errada");
break; }


return 0;	
}
