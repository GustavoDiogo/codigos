#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct ObjArvoreBinaria{
	int dado;
	int *esq;
	int *dir;

}ArvoreBinaria;

void imprimirOpcoes();
ArvoreBinaria* criarArvoreBinaria();
void insercaoIterativa();


int main(){	
	bool sair = false;
	int opcaoSelecionada;
	ArvoreBinaria *novaArvore;

	imprimirOpcoes();

	while(!sair){		
		scanf("%d", &opcaoSelecionada);		
		
		switch(opcaoSelecionada){
			case 0:
			;
				imprimirOpcoes();
				break;

			case 1: 
			;				
					novaArvore = criarArvoreBinaria();				
				break;
			case 4:
			;
				if(novaArvore != NULL){
					printf("%d\n",novaArvore);
					printf("%d\n",*novaArvore);
					break;
				}
				else{
					printf("Por favor, crie um Arvore antes de fazer uma insercao\n");
					break;
				}
				break;

			case 10:
			;
				sair = true;
				break;

			default:
			;
				printf("Por favor digite um número de 0 a 9\n");
				printf("\n");
				break;
		}
		
	}

	return 0;
}

void imprimirOpcoes(){
	printf("Opcoes de Manipulacao da Arvore Binaria de Busca\n");
	printf("0-Mostrar essas opcoes novamente\n");
	printf("1-Criar uma Arvore Binaria\n");
	printf("2-Busca Recursiva\n");
	printf("3-Busca Iterativa\n");
	printf("4-Insercao Iterativa\n");
	printf("5-Insercao Recursiva\n");	
	printf("6-Remocao\n");
	printf("7-Percurso pre-ordem\n");
	printf("8-Percurso in-ordem\n");
	printf("9-Percurso pos-ordem\n");
	printf("------------------------\n");
	printf("10 - Sair/Fechar o programa\n");
	printf("\n");
}

ArvoreBinaria* criarArvoreBinaria(){
	printf("Digite o valor da raiz\n");
	int raiz;
	scanf("%d",&raiz);

	ArvoreBinaria* novaArvore;
	novaArvore = (ArvoreBinaria*) malloc(sizeof(ArvoreBinaria));

	novaArvore->dado = raiz;
	printf("Arvore Criada!\n");

	return novaArvore;
}

void insercaoIterativa(int dado){

}