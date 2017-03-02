#include<stdio.h>

	int main(void){
		int a,b,total;
		scanf("%d %d", &a,&b);
		total = b-a;
		if (total<0){
			total = 24 + (b-a);
		}
		if (a==b){
			printf("O JOGO DUROU 24 HORA(S)\n");
		}
		else printf("O JOGO DUROU %d HORA(S)\n", total);

return 0;
	}