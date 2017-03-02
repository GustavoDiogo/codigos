#include<stdio.h>

int main(void){

	double x,c1;
	scanf("%lf", &x);
	if(0<=x && x<=2000.00){
		printf("Isento\n");
	}
	else if(2000.01<=x && x<=3000.00){
		c1=((x-2000)*0.08);
		printf("R$ %.2lf\n", c1);
	}
	else if(3000.01<=x && x<=4500.00){
		c1=((x-3000)*0.18 + 1000*0.08);
		printf("R$ %.2lf\n",c1);
	}
	else if(x>=4500.01){
		c1=((x-4500.00)*0.28 + 1500*0.18 + 1000*0.08);
		printf("R$ %.2lf\n", c1);
	}
	return 0;
}