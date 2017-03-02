#include<stdio.h>

	int main(void){
		double n1,n2,n3,n4,nexame,media,mediafinal;
		scanf("%lf %lf %lf %lf %lf", &n1,&n2,&n3,&n4,&nexame);
		media=(n1*2+n2*3+n3*4+n4)/10;
		mediafinal=(media+nexame)/2;

		if (nexame>0 && mediafinal>=5) 
		{
			printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\nAluno aprovado.\nMedia final: %.1lf\n", media, nexame, mediafinal);
		}
		else if (nexame==0 && media>=5)
		{
			printf("Media: %.1lf\nAluno aprovado.\n", media);
		}
		else if (media<=5 && mediafinal<=5)
		{
			printf("Media: %.1lf\nAluno reprovado.\n", media);
		}
		return 0;
	}
