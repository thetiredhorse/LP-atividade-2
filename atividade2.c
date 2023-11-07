#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");

int opcao;
float desconto, valor, compra;

printf("======= mercadinho do zé =======");
printf("\n\ncompras acima de 100 reais feita durante a semana terá 10 porcento de desconto \n");
printf("compras acima de 100 reais feita no fim de semana terá 15 porcento de desconto \n\n");

printf("escolha um dia para fazer compras: \n");
scanf("%d",&opcao);

printf("valor base: \n");
scanf("%f",&valor);


printf("valor que pretende gastar: \n");
scanf("%f",&compra);


switch (opcao) {
case 1:
case 2:
case 3:
case 4:
case 5: 
desconto = valor - (compra * 0.10);
printf("desconto dado: %.2f ", desconto);
break;
case 6:
case 7:
desconto = valor - (compra * 0.15);
printf("desconto dado: %.2f ", desconto);
break;
default:
printf("opcão inavlida");
break; }

printf("\no dia escolhido foi %d ", opcao);

return 0;	
}
