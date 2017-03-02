#include<stdio.h>

	int main(){
		int h,s;
		double d;
		scanf("%d %d", &h, &s);
		d = (h*s)/12.0;
		printf("%.3lf\n", d);
return 0;

	}