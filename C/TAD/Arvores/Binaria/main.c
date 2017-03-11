#include<stdio.h>
#include<stdbool.h>

void imprimirOpcoes();
void criarArvoreBinaria();

typedef struct ObjArvoreBinaria{
	int dado;
	int *esq;
	int *dir;

}ArvoreBinaria;


int main(int argc, char const *argv[]){	
	bool sair = false;
	int opcaoSelecionada;

	imprimirOpcoes();

	while(!sair){		
		scanf("%d", &opcaoSelecionada);		
		
		switch(opcaoSelecionada){
			case 0:
				imprimirOpcoes();
				break;

			case 1:
				criarArvoreBinaria();
				printf("%d\n", novaArvore->dado);
				break;

			case 10:
				sair = true;
				break;

			default:
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

	struct ArvoreBinaria* novaArvore;
	novaArvore = malloc(sizeof(ArvoreBinaria));

	novaArvore->dado = raiz;

	return novaArvore;
}