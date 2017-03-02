#include<stdio.h>

int main(void){
	int n,q;
	scanf("%d\n",&n);
	q = 1;
	while(q<=10){
		printf("%d x %d = %d\n",q,n,(q*n));
		q += 1;
	}

	return 0;
}
