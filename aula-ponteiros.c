/*
	Utilização de Ponteiros em Linguagem C

*O que é um Ponteiro?
	- Um Ponteiro é uma variável que armazena o
	endereço de memória de outra variável.

	- Em vez de armazenar um valor diretamente, um
	ponteiro aponta para o local na memória onde
	o valor está armazenado.

	Exemplo:
		int x = 10; //Declara uma variável inteira
		int *p; //Declara um ponteiro para um inteiro
		p = &x; //O ponteiro p armazena o endereço da variável X

*Declaração de Ponteiros
	Sintaxe:
		- tipo *nome_do_ponteiro;
		Exemplo:
			int *p; //Ponteiro para um inteiro
			float *f;//Ponteiro para um float
			char *c;//Ponteiro para um char

*Acesso e Manipulação com Ponteiros

	Para acessar o valor armazenado no endereço de
	memória apontado por um ponteiro, utilizamos o
	operador de desreferênciação '*'.

	Exemplo:
		int x = 10;	
		int *p = &x;// p armazena o endereço de x
		int valor = *p;// valor receve o valor de x, que é 10

* Modificando o Valor 
	Exemplo:
		-Podemos modificar o valor da variável através do ponteiro.
		*p = 20; // Agora x será 20, pois p aponta para x
*/
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
