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
No *maisDireita();
No *maisEsquerda();
No *remocao();
void percursoPre();
void percursoIn();
void percursoPos();

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

			case 5:
			;
				printf("Digite o valor para Remocao\n");	
				scanf("%d",&valorInserido);

				remocao(Arvore,valorInserido);
				break;

			case 6:
			;
				percursoPre(Arvore);
				break;

			case 7:
			;
				percursoIn(Arvore);
				break;

			case 8:
			;
				percursoPos(Arvore);
				break;
				
			case 9:
			;
				free(Arvore);
				sair = true;
				break;

			default:
			;
				printf("Opcao invalida, digite 0 para ver todas as opcoes validas\n\n");				
				break;
		}
		
	}

	return 0;
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
	printf("9 - Sair/Fechar o programa\n\n");
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

void insercaoIterativa(No **paiRaiz, int valorInserido){
	No *p,*q;

	if(*paiRaiz == NULL){
		p = (No*) malloc(sizeof(No));
		p->esq = NULL;
		p->dir = NULL;
		p->numero = valorInserido;
		(*paiRaiz) = p;
	}
	else{
		p = (*paiRaiz);

		while(p != NULL){
			if(p->numero > valorInserido){
				q = p;
				p = p->esq;
			}
			else{
				q = p;
				p = p->dir;
			}
		}
		p = (No*) malloc(sizeof(No));
		p->esq = NULL;
		p->dir = NULL;
		p->numero = valorInserido;
		
		if(q->numero > valorInserido) q->esq = p;
		else q->dir = p;
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

No *maisDireita(No **paiRaiz){
	while((*paiRaiz)->dir !=NULL){
		(*paiRaiz) = (*paiRaiz)->dir;

		return (*paiRaiz);
	}
}

No *maisEsquerda(No **paiRaiz){
	while((*paiRaiz)->esq !=NULL){
		(*paiRaiz) = (*paiRaiz)->esq;

		return (*paiRaiz);
	}
}

No *remocao(No **paiRaiz, int valorInserido){
	if(*paiRaiz == NULL) printf("O valor %d não existe na Arvore\n", valorInserido);
	else{
		if(valorInserido < (*paiRaiz)->numero) remocao(&(*paiRaiz)->esq,valorInserido);
		else if(valorInserido > (*paiRaiz)->numero) remocao(&(*paiRaiz)->dir,valorInserido);
		
		else{
			if((*paiRaiz)->esq != NULL){
				No *auxiliar = maisDireita(&(*paiRaiz)->esq);
				(*paiRaiz)->numero = auxiliar->numero;

				(*paiRaiz)->esq = remocao(&(*paiRaiz)->esq, auxiliar->numero);
			}
			else if((*paiRaiz)->dir != NULL){
				No *auxiliar = maisEsquerda(&(*paiRaiz)->dir);
				(*paiRaiz)->numero = auxiliar->numero;

				(*paiRaiz)->dir = remocao(&(*paiRaiz)->dir, auxiliar->numero);
			}
			else{
				printf("O valor %d foi removido!\n", (*paiRaiz)->numero);
				(*paiRaiz) = NULL;
			}			
		}
	}
	return (*paiRaiz);
}

void percursoPre(No **paiRaiz){
	if((*paiRaiz) != NULL){
		printf("%d ", (*paiRaiz)->numero);
		percursoPre(&(*paiRaiz)->esq);
		percursoPre(&(*paiRaiz)->dir);
	}	
}

void percursoIn(No **paiRaiz){
	if((*paiRaiz) != NULL){
		percursoIn(&(*paiRaiz)->esq);
		printf("%d ", (*paiRaiz)->numero);
		percursoIn(&(*paiRaiz)->dir);
	}
}

void percursoPos(No **paiRaiz){
	if((*paiRaiz) != NULL){
		percursoPos(&(*paiRaiz)->esq);		
		percursoPos(&(*paiRaiz)->dir);
		printf("%d ", (*paiRaiz)->numero);
	}
}