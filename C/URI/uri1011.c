#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{

	double r,v;
	scanf("%lf", &r);
	v = (4.0/3.0)*3.14159*pow(r, 3.0);
	printf("VOLUME = %.3lf\n", v);

	return 0;


}

