#include<stdio.h>

int main(void){
	long int i,n;
	scanf("%ld\n",&n);
	i = 2;
	if(5<n && n<2000){
		while(i<=n){
		printf("%ld^2 = %ld\n",i,(i*i));
		i+=2;
		}
	}


	return 0;
}