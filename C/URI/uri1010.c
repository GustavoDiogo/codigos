#include<stdio.h>
int main(void){
    int a,b,x,y;
    double m,n,result;
    scanf("%d%d%lf",&a,&b,&m);
    scanf("%d%d%lf",&x,&y,&n);
    result=(double)b*m+(double)y*n;
    printf("VALOR A PAGAR: R$ %.2lf\n",result);
    return 0;
}


