#include<stdio.h>

int main(){

char name[50];
double salary,sold,total;
scanf("%s %lf %lf", name,&salary,&sold);
total = salary+sold*15/100;
printf("TOTAL = R$ %.2lf\n", total);
return 0;


} 
