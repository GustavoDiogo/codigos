#include<stdio.h>

	int main(void){
		int h1,m1,h2,m2,t1,t2;
		scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
		t1=h2-h1;
		t2=m2-m1;
		if(t1<0){
			t1= 24 +(h2-h1);
		}
		if(t2<0){
			t2= 60 +(m2-m1);
			t1--;
		}
		if (h2==h1 && m2==m1){
			printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		}
		else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t1,t2);

return 0;
	}