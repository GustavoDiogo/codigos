#include<stdio.h>

	int main(){
		int input,y,m,d,modulo;
		scanf("%d", &input);

		y = input/365;
		modulo=input%365;
		m=modulo/30;
		modulo=modulo%30;
		d=modulo/1;
		modulo=modulo%1;
		printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y,m,d);
	
		return 0;
	}