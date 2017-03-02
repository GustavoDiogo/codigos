#include<stdio.h>

int main(void){
	double x1,x2,x3,x4,x5,x6,tt,s;
	int t = 0;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n",&x1,&x2,&x3,&x4,&x5,&x6);
	if(x1>0){
		t += 1;
		s +=x1;
	}
	if(x2>0){
		t += 1;
		s +=x2;
	}
	if(x3>0){
		t += 1;
		s +=x3;
	}
	if(x4>0){
		t +=1;
		s +=x4;
	}
	if(x5>0){
		t +=1;
		s +=x5;
	}
	if(x6>0){
		t +=1;
		s +=x6;
	}
	printf("%d valores positivos\n", t);
	tt = s/t;
	printf("%.1lf\n",tt);


	return 0;

}