#include<stdio.h>

	int main(){
		long int input,hora,minuto,modulo;
		scanf("%ld", &input);
		hora=input/3600;
		modulo=input%3600;
		minuto=modulo/60;
		modulo=modulo%60;
		printf("%ld:%ld:%ld\n", hora,minuto,modulo);

		return 0;
	}