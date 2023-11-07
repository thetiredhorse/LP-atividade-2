#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");

float nota;

printf("nota de aluno: ");
scanf("%f",&nota);
                                                                                                                                                                                                                                                                                     

printf("ele é %.2f ", nota);


if (nota >= 9) {{
printf("excelente");
} if (nota >= 7 || nota < 8.9) {
printf("bom");
} if (nota > 5 || nota <= 6.9 ) {
printf("razoavel");
} if (nota < 5 ) {
printf("insuficiente");
}}


return 0;	
}
