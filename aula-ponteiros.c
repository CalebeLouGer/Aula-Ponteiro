#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x = 10;
	int *p = &x; 
	int valor = *p; 
	*p = 20;
	printf("Valor armazenado no endere�o: %d\n",valor);
	printf("Valor armazenado no endere�o: %d\n",*p);
	printf("Endere�o de X : %d",p);
}
