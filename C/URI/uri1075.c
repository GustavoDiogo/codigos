#include<stdio.h>

int main(void){
	int n,q;
	scanf("%d\n", &n);
	q = 0;
	while(q<10000){
		q += 1;
		if(q % n == 2){
		printf("%d\n",q);
		}
	}

	return 0;
}
