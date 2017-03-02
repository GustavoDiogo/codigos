#include<stdio.h>

	int main(void){
		double a,b,c,xa,xb,xc,x1,x2;
		scanf("%lf %lf %lf", &a,&b,&c);
		x2==b*b+c*c;
		xa==a*a;
		x1==b+c;
		xb==b*b;
		xc==c*c;
		a>b>c;
		if(a>(b+c) || b>= (a+c) || c>=(a+b)){
			printf("NAO FORMA TRIANGULO\n");
		}
		if(xa==x2){
			printf("TRIANGULO RETANGULO\n");
		} 
		if(xa>x2){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if(xa<x2){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(a==b && b==c){
			printf("TRIANGULO EQUILATERO\n");
		}
		if((a==b && a!=c) || (a==c && a!=b) || (b==c && b+!a)){
			printf("TRIANGULO ISOSCELES\n");
		}
	return 0;
	}