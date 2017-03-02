#include<stdio.h>

int main(void){
	int x1,x2,x3,x4,x5;
	int t = 0;
	scanf("%d\n%d\n%d\n%d\n%d\n",&x1,&x2,&x3,&x4,&x5);
	if(x1 % 2 == 0){
		t += 1;
		
	}
	if(x2 % 2 == 0){
		t += 1;
		
	}
	if(x3 %2 == 0){
		t += 1;
		
	}
	if(x4 % 2 == 0){
		t +=1;
		
	}
	if(x5 % 2 == 0){
		t +=1;
	}
	printf("%d valores pares\n", t);
	
	return 0;

}