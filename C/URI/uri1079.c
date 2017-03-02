#include<stdio.h>

int main(void){
	int n;
	float x1,x2,x3,t;
	scanf("%d",&n);
	while(n--){
	scanf("%f %f %f",&x1,&x2,&x3);
	t = ((x1*2 + x2*3 + x3*5)/10);
	printf("%.1f\n",t);
	}


	return 0;
}