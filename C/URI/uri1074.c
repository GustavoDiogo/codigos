#include<stdio.h>

int main(void){
	int n,q;
	scanf("%d\n",&q);
	while(q--){
		scanf("%d\n", &n);

	if(n==0){
		printf("NULL\n");
		continue;
	}
	
	if(n % 2 == 0){
		printf("EVEN\n");
	}
	
	else{
		printf("ODD\n");
	}
	
	if(n<0){
		printf("NEGATIVE\n");
	}
	else{
		printf("POSITIVE\n");
	}
	
}
	return 0;
}