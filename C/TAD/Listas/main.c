#include<stdio.h>
#include "ListaLigada.h"

int main(){
	ListaLigada *macaco;
	macaco = malloc(sizeof(ListaLigada));

	macaco->proximo = 10;

	printf("%d\n", macaco->proximo);
	
	return 0;
}