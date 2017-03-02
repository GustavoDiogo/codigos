#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

double bhaskara(void)
{
       double a,b,c;                    
       printf("Delta = b^2 - 4ac\n");
       printf("Digite b: ");
       scanf("%lf", &b);
       printf("Digite a: ");
       scanf("%lf", &a);
       printf("Digite c: ");
       scanf("%lf", &c);
       
       double resultado = b*b - 4*a*c;
       
       printf("Resultado = %lf\n", resultado); 
       return resultado;
}

int main(void)
{
    char *opcao;
    opcao = (char *) malloc(25);
    do{
    
    printf("\nO que deseja fazer?\n");
    printf("Digite /help para ver todas as opcoes matematicas\n");
    scanf("%s", &opcao);
    
    if (strcmp(opcao, "/help") == 0)
    {
    printf("Opcoes disponiveis:\n");
    printf("bhaskara\n");
    free(opcao);          
    }
    else if(strcmp(opcao, "bhaskara") == 0)
    {
    bhaskara();
    free(opcao);
    }
    else
    printf("Opcao invalida digite /help ou /sair\n");
    free(opcao);
    
    }while(strcmp(opcao, "/sair") != 0);
    
    return 0;
}

