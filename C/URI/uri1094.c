#include<stdio.h>

int main(void){
	int n,tc=0,tr=0,ts=0,q;
	char tipo;
	float pc,pr,ps,total;
	scanf("%d\n",&n);
	while(n--){
		scanf("%d %c\n",&q,&tipo);
		if(tipo == 'C'){
			tc += q;
		}
		else if(tipo == 'R'){
			tr += q;
		}
		else if(tipo =='S'){
			ts += q;
		}
		if(n==0){
			total = (tc+tr+ts);
			pc = (100*tc)/(total);
			pr = (100*tr)/(total);
			ps = (100*ts)/(total);
			printf("Total: %f cobaias\n",total);
			printf("Total de coelhos: %d\n",tc);
			printf("Total de ratos: %d\n",tr);
			printf("Total de sapos: %d\n",ts);
			printf("Percentual de coelhos: %.2f %%\n",pc);
			printf("Percentual de ratos: %.2f %%\n",pr);
			printf("Percentual de sapos: %.2f %%\n",ps);
		}

	}


	return 0;
}