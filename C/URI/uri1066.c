#include<stdio.h>

int main(void){
	int x1,x2,x3,x4,x5;
	int p = 0,po=0,n=0,i=0;
	scanf("%d\n%d\n%d\n%d\n%d\n",&x1,&x2,&x3,&x4,&x5);

		if(x1 % 2 == 0){p += 1;}else{i+= 1;}
		if(x1>0){po += 1;}else if(x1<0){n += 1;}

		if(x2 % 2 == 0){p += 1;}else{i+= 1;}
		if(x2>0){po += 1;}else if(x2<0){n += 1;}

		if(x3 % 2 == 0){p += 1;}else{i+= 1;}
		if(x3>0){po += 1;}else if(x3<0){n += 1;}

		if(x4 % 2 == 0){p += 1;}else{i+= 1;}
		if(x4>0){po += 1;}else if(x4<0){n += 1;}

		if(x5 % 2 == 0){p += 1;}else{i+= 1;}
		if(x5>0){po += 1;}else if(x5<0){n += 1;}
	


	printf("%d valor(es) par(es)\n", p);
	printf("%d valor(es) impar(es)\n", i);
	printf("%d valor(es) positivo(s)\n", po);
	printf("%d valor(es) negativo(s)\n", n);
	
	return 0;

}
