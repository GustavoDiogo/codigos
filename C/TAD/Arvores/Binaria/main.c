#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
	notes:

	//Arvore->dir = (int *) malloc(30*sizeof(int));
*/

struct No{
	int numero;
	struct No *esq;
	struct No *dir;

};
typedef struct No No;

void imprimirOpcoes();
void buscaRecursiva();
void buscaIterativa();
void insercaoIterativa();
void insercaoRecursiva();
void remocao();
void percursoPre();
void percursoIn();
void percursoPos();
void status();

int main(){	
	bool sair = false;
	int opcaoSelecionada;
	int valorInserido;

	No *Arvore = NULL;
	Arvore = (No*) malloc(sizeof(No));
	

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
				printf("Digite o valor para Busca Recursiva\n");
				scanf("%d",&valorInserido);

				buscaRecursiva(Arvore, valorInserido);
				break;

			case 2:
			;
				printf("Digite o valor para Busca Iterativa\n");
				scanf("%d",&valorInserido);

				buscaIterativa(Arvore, valorInserido);
				break;

			case 3:
			;
				printf("Digite o valor para Insercao Iterativa\n");	
				scanf("%d",&valorInserido);

				insercaoIterativa(Arvore,valorInserido);	
				break;	

			case 4:
			;
				printf("Digite o valor para Insercao Recursiva\n");	
				scanf("%d",&valorInserido);

				insercaoRecursiva(Arvore,valorInserido);		
				break;
				
			case 9:
			;
				sair = true;
				break;

			case 11:
			;
				status(Arvore);
				break;

			default:
			;
				printf("Opcao invalida, digite 0 para ver todas as opcoes validas\n\n");				
				break;
		}
		
	}

	return 0;
}
void buscaIterativa(No **paiRaiz, int valorInserido){
	No *copiaPaiRaiz = *paiRaiz;

	bool procurando = true;
	while(procurando){
		if(copiaPaiRaiz != NULL){
			if(valorInserido < copiaPaiRaiz->numero) copiaPaiRaiz = copiaPaiRaiz->esq;
			else if(valorInserido > copiaPaiRaiz->numero) copiaPaiRaiz = copiaPaiRaiz->dir;
			else if(valorInserido == copiaPaiRaiz->numero){
				procurando = false;
				printf("O valor %d existe na Arvore\n", copiaPaiRaiz->numero);
			} 		
		}		
		else{
			procurando = false;
			printf("O valor não existe na Arvore\n");
		} 
	}

}

void buscaRecursiva(No **paiRaiz, int valorInserido){
	if(*paiRaiz != NULL){
		if(valorInserido < (*paiRaiz)->numero) buscaRecursiva(&(*paiRaiz)->esq, valorInserido);			
		else if(valorInserido > (*paiRaiz)->numero) buscaRecursiva(&(*paiRaiz)->dir, valorInserido);
		else if(valorInserido == (*paiRaiz)->numero) printf("O valor %d existe na Arvore\n", (*paiRaiz)->numero);
				
	}
	else{
		printf("O valor não existe na Arvore\n");
	}
}

void imprimirOpcoes(){
	printf("--------------------- Arvore Binaria de Busca ---------------------\n");
	printf("0-Mostrar essas opcoes novamente\n");
	printf("1-Busca Recursiva\n");
	printf("2-Busca Iterativa\n");
	printf("3-Insercao Iterativa\n");
	printf("4-Insercao Recursiva\n");	
	printf("5-Remocao\n");
	printf("6-Percurso pre-ordem\n");
	printf("7-Percurso in-ordem\n");
	printf("8-Percurso pos-ordem\n");
	printf("-------------------------------------------------------------------\n");
	printf("11 - Checa o status do ultimo nó\n");
	printf("9 - Sair/Fechar o programa\n\n");
}

void insercaoIterativa(No **paiRaiz, int valorInserido){
	No *pai;

	if(*paiRaiz == NULL){
		*paiRaiz = (No*) malloc(sizeof(No));
		(*paiRaiz)->esq = NULL;
		(*paiRaiz)->dir = NULL;
		(*paiRaiz)->numero = valorInserido;
	}

	while((*paiRaiz) != NULL && (*paiRaiz)->numero != valorInserido){
		pai = (*paiRaiz);
		
		if(valorInserido < (*paiRaiz)->numero) (*paiRaiz) = (*paiRaiz)->esq;

		else if(valorInserido > (*paiRaiz)->numero) (*paiRaiz) = (*paiRaiz)->dir;

	};
	
	if(*paiRaiz == NULL){
		*paiRaiz = (No*) malloc(sizeof(No));
		(*paiRaiz)->esq = NULL;
		(*paiRaiz)->dir = NULL;
		(*paiRaiz)->numero = valorInserido;
		
		if(valorInserido < pai->numero) pai->esq = (*paiRaiz);

		else pai->dir = (*paiRaiz);	

		(*paiRaiz) = pai;
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

void status(No **paiRaiz){
	if(*paiRaiz != NULL){
		printf("O valor do seu nó atual é %d\n", (*paiRaiz)->numero);
		printf("O & do filho esquerdo é %d\n",(*paiRaiz)->esq);
		printf("O & do filho direito é %d\n",(*paiRaiz)->dir);
	}
	else printf("Use algum metodo de insercao antes de checar o status\n\n");
}