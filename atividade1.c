#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");

int temp;

printf("clima atual: \n");
scanf("%d",&temp);

system("cls || clear");

printf("o clima atual é %d \n",temp);


if (temp >= 25) {
	printf("ensolarado");
} else if (temp <= 15) {
printf("chuvoso");
} else {
	printf("nublado");
}

return 0;	
}
