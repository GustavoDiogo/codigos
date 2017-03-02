#include<stdio.h>

	int main(void){
		double a,b,c,area,perimetro;
		scanf("%lf %lf %lf", &a, &b, &c);
		if(a+b>c && b+c>a && a+c>b)
		{
			perimetro=a+b+c;
			printf("Perimetro = %.1lf\n", perimetro);
		}
		else
		{
			area=.5*(a+b)*c;
			printf("Area = %.1lf\n", area);
		}
		
		return 0;

	}
