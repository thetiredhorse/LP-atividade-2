#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL, "portuguese");


char login [250]= "marta" ;
char senha [250]= "12345";
char loginSalvo [ 250];
char senhaSalva [250];


do {	
	printf("login: ");
	gets(login);
	
	printf("senha: ");
	gets(senha);
	


} while (strcmp(login, loginSalvo) == 'marta' && strcmp(senha, senhaSalva) == 12345);
	
// não consegui fazer repetir, não achei o erro
		
	return 0;
}
