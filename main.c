#include<stdio.h>

double raizq(int x)
{
        double aproximacao = 0.0000001;
        double valor1 = 1.0;
        double valor2 = 0;
        do
        {
                valor2 = valor1;
                valor1 = (valor1 + (x/valor1))/2;
        } while (abs(valor1 - valor2) > aproximacao);

        return valor1;
}
int main(void)
{
        double n;
        scanf("%lf", &n);
        printf("%.2lf\n", n);
}
double raizq(double n)
}
return 0.0;
}
