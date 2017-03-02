#include<stdio.h>

	int main(){
		long int dinheiro,aprox,a,b,c,d,e,f;
		scanf("%ld", &dinheiro);
		printf("%ld\n", dinheiro);

		a = dinheiro/100;
		aprox=dinheiro%100;
		printf("%ld nota(s) de R$ 100,00\n", a);

		b=aprox/50;
		aprox=aprox%50;
		printf("%ld nota(s) de R$ 50,00\n", b);

		c=aprox/20;
		aprox=aprox%20;
		printf("%ld nota(s) de R$ 20,00\n", c);

		d=aprox/10;
		aprox=aprox%10;
		printf("%ld nota(s) de R$ 10,00\n", d);

		e=aprox/5;
		aprox=aprox%5;
		printf("%ld nota(s) de R$ 5,00\n", e);

		f=aprox/2;
		aprox=aprox%2;
		printf("%ld nota(s) de R$ 2,00\n", f);
		printf("%ld nota(s) de R$ 1,00\n", aprox);


return 0;


	}
