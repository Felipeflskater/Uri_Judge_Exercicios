#include <stdio.h>
int main (){
	int T,i=0,anos=0;
	long long int PA,PB;
	double G1,G2;
	scanf("%d",&T);
	for (i=0;i < T;i++){
		scanf("%d%d",&PA,&PB);
		scanf("%lf%lf",&G1,&G2);
		anos=0;
		do{
			PA = PA +(PA * G1)/100;
			PB = PB +(PB * G2)/100;
			anos=anos+1;
			if (anos > 100){
				break;
			}
		}while(PA <= PB);
		if(anos > 100){
			printf("Mais de 1 seculo.\n");
		}
		else{
			printf("%d",anos);
			printf(" anos.\n");
		}
	}
	return 0;
}