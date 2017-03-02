#include<stdio.h>

	int main(){
		double a,b,c,pi=3.14159,t,cir,tra,q,r;
		scanf("%lf %lf %lf", &a,&b,&c);
		t=a*c/2;
		cir=pi*c*c;
		tra= (a+b)*c/2;
		q=b*b;
		r=a*b;

		printf("TRIANGULO: %.3lf\n", t);
		printf("CIRCULO: %.3lf\n", cir);
		printf("TRAPEZIO: %.3lf\n", tra);
		printf("QUADRADO: %.3lf\n", q);
		printf("RETANGULO: %.3lf\n",r);
		
return 0;
}

