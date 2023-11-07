#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");

int idade;

printf("digite a idade: ");
scanf("%d",&idade);



printf("\na idade dele é %d \n", idade);


if (idade >= 18 ) {
printf("acesso permitido");
} else {
printf("acesso negado");
}


return 0;	
}
