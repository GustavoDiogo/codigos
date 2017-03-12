#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
	notes:

	//novoNo->dir = (int *) malloc(30*sizeof(int));
*/

struct No{
	int numero;
	bool valida;
	struct No *esq;
	struct No *dir;

};
typedef struct No No;

void imprimirOpcoes();
void criarArvore();
void buscarRecursiva();
void buscaIterativa();
void insercaoIterativa();
void insercaoRecursiva();
void remocao();
void percursoPre();
void percursoIn();
void percursoPos();
void verifica();

int main(){	
	bool sair = false;
	int opcaoSelecionada;
	int valorInserido;

	No *novoNo = NULL;
	novoNo = (No*) malloc(sizeof(No));
	criarArvore(novoNo);

	imprimirOpcoes();

	while(!sair){		
		scanf("%d", &opcaoSelecionada);		
		
		switch(opcaoSelecionada){
			case 0:
			;
				imprimirOpcoes();
				break;

			case 2:
				verifica(novoNo);
				break;

			case 3:
			;
				printf("Digite o valor para Insercao Iterativa\n");	
				scanf("%d",&valorInserido);

				insercaoIterativa(novoNo,valorInserido);	
				break;	

			case 4:
			;
				printf("Digite o valor para Insercao Recursiva\n");	
				scanf("%d",&valorInserido);

				insercaoRecursiva(novoNo,valorInserido);		
				break;
				
			case 9:
			;
				sair = true;
				break;

			default:
			;
				printf("Opcao invalida, digite 0 para ver todas as opcoes validas\n");
				printf("\n");
				break;
		}
		
	}

	return 0;
}

void imprimirOpcoes(){
	printf("Opcoes de Manipulacao da Arvore Binaria de Busca\n");
	printf("0-Mostrar essas opcoes novamente\n");
	printf("1-Busca Recursiva\n");
	printf("2-Busca Iterativa\n");
	printf("3-Insercao Iterativa\n");
	printf("4-Insercao Recursiva\n");	
	printf("5-Remocao\n");
	printf("6-Percurso pre-ordem\n");
	printf("7-Percurso in-ordem\n");
	printf("8-Percurso pos-ordem\n");
	printf("------------------------\n");
	printf("9 - Sair/Fechar o programa\n");
	printf("\n");
}

void criarArvore(No **paiRaiz){
	(*paiRaiz)->valida = true;
}
 
void insercaoIterativa(No **paiRaiz, int valorInserido){
	No *pai;

	if((*paiRaiz)->valida = true){

		do{
			pai = (*paiRaiz);

			printf("plei\n");

			if(valorInserido < (*paiRaiz)->numero) (*paiRaiz) = (*paiRaiz)->esq;

			else if(valorInserido > (*paiRaiz)->numero) (*paiRaiz) = (*paiRaiz)->dir;

		}while((*paiRaiz) != NULL && (*paiRaiz)->numero != valorInserido);

		if(*paiRaiz == NULL){
			*paiRaiz = (No*) malloc(sizeof(No));
			(*paiRaiz)->esq = NULL;
			(*paiRaiz)->dir = NULL;
			(*paiRaiz)->numero = valorInserido;

			printf("plau\n");

			if(valorInserido < pai->numero) pai->esq = (*paiRaiz);

			else pai->dir = (*paiRaiz);	
		}
	}
	else{
		*paiRaiz = (No*) malloc(sizeof(No));
		(*paiRaiz)->esq = NULL;
		(*paiRaiz)->dir = NULL;
		(*paiRaiz)->numero = valorInserido;
	}
}


void insercaoRecursiva(No **paiRaiz, int valorInserido){

	if(*paiRaiz == NULL){
		*paiRaiz = (No*) malloc(sizeof(No));
		(*paiRaiz)->esq = NULL;
		(*paiRaiz)->dir = NULL;
		(*paiRaiz)->numero = valorInserido;	
	}
	else{
		if(valorInserido < (*paiRaiz)->numero) insercaoRecursiva(&(*paiRaiz)->esq, valorInserido);

		else if(valorInserido > (*paiRaiz)->numero) insercaoRecursiva(&(*paiRaiz)->dir, valorInserido);

		else printf("O valor já existe!\n");
	}
}

void verifica(No **paiRaiz){
		printf("A paiRaiz ATUAL EH %d\n", (*paiRaiz)->numero);
		printf("O lado esquerdo é %d\n",(*paiRaiz)->esq);
		printf("O lado direito é %d\n",(*paiRaiz)->dir);
}