#include<stdio.h>
#include<stdbool.h>

void opcoes();


typedef struct ObjArvoreBinaria{
	int dado;
	int *esq;
	int *dir;

}ArvoreBinaria;


int main(int argc, char const *argv[]){	
	bool sair = false;
	int opcao;

	opcoes();

	while(!sair){		
		scanf("%d", &opcao);		
		
		switch(opcao){
			case 0:
				opcoes();
				break;
			
			case 9:
				sair = true;
				break;

			default:
				printf("Por favor digite um número de 0 a 9\n");
				printf("\n");
				break;
		}
		
	}

	
}

void opcoes(){
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
