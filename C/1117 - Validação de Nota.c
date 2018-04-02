#include <stdio.h>
int main (){
	float N1,N2,media;
	do{
	scanf("%f",&N1);
	if (N1 < 0 || N1 > 10){
		printf("nota invalida\n");
	} 
	}while(N1 < 0 || N1 > 10);
	do{
	scanf("%f",&N2);
	if (N2 < 0 || N2 > 10){
		printf("nota invalida\n");
	} 
	}while(N2 < 0 || N2 > 10);
media = (N1+N2)/2;
printf ("media = %.2f",media);
printf("\n");
return 0;
}