#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
	notes:

	//novoNo->dir = (int *) malloc(30*sizeof(int));
*/

struct No{
	int numero;
	struct No *esq;
	struct No *dir;

};
typedef struct No No;

void imprimirOpcoes();
void criarArvore();
No* criarNo();
void buscarRecursiva();
void buscaIterativa();
void insercaoIterativa();
void insercaoRecursiva();
void remocao();
void percursoPre();
void percursoIn();
void percursoPos();

int main(){	
	bool sair = false;
	int opcaoSelecionada;
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

			case 4:
			;
				printf("Digite o valor de insercao\n");	
				int valor;
				scanf("%d",&valor);

				insercaoRecursiva(novoNo,valor);		
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
void criarArvore(No **raiz){
	*raiz = NULL;
}
/*
No* criarNo(){
	printf("Digite o valor da raiz\n");
	int raiz;
	scanf("%d",&raiz);

	No* novoNo;
	novoNo = (No*) malloc(sizeof(No));

	novoNo->numero = raiz;
	novoNo->esq = NULL;
	novoNo->dir = NULL;
	printf("Arvore Criada!\n");
	printf("\n");

	return novoNo;
}*/

void insercaoRecursiva(No **raiz, int valor){
	if(*raiz == NULL){
		*raiz = (No*) malloc(sizeof(No));
		(*raiz)->esq = NULL;
		(*raiz)->dir = NULL;
		(*raiz)->numero = valor;	
	}
	else{

		if(valor < (*raiz)->numero) insercaoRecursiva(&(*raiz)->esq, valor);

		else if(valor > (*raiz)->numero) insercaoRecursiva(&(*raiz)->dir, valor);

		else printf("O elemento já existe!\n");	
	}
	printf("O lado esquerdo é %d\n",(*raiz)->esq);
	printf("O lado direito é %d\n",(*raiz)->dir);

}