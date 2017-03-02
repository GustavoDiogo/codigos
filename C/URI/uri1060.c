#include<stdio.h>

int main(void){
	double x1,x2,x3,x4,x5,x6;
	int t = 0;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n",&x1,&x2,&x3,&x4,&x5,&x6);
	if(x1>0){
		t += 1;
	}
	if(x2>0){
		t += 1;
	}
	if(x3>0){
		t += 1;
	}
	if(x4>0){
		t +=1;
	}
	if(x5>0){
		t +=1;
	}
	if(x6>0){
		t +=1;
	}
	printf("%d valores positivos\n", t);

	return 0;

}