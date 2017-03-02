#include<stdio.h>

	int main(void){
			int x,y;
			double total,price;
			scanf("%d %d", &x, &y);
			if(x==1)
			{
				price=4;
			}
			else if(x==2)
			{
				price=4.50;
			}
			else if(x==3)
			{
				price=5;
			}
			else if(x==4)
			{
				price=2;
			}
			else if(x==5)
			{
				price=1.5;
			}
			total=y*price;
			printf("Total: R$ %.2lf\n", total);

			return 0;
	}