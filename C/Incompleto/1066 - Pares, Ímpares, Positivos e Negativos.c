#include <stdio.h>
int main (){
	int valor,contpar = 0,contimpar = 0,contpositivo = 0,contnegativo = 0;
	for (int i = 0; i < 5; i++){
		scanf("%d",&valor);
		if (valor % 2 == 0){
			contpar++;
		}
		else if (not(valor % 2 == 0)){
			contimpar++;
		}
		if (valor > 0){
			contpositivo++;
		}
		else if (valor < 0){
			contnegativo++;
		}

	}
	printf("%d",contpar," valor(es) par(es)\n");
	printf("%d",contimpar," valor(es) impar(es)\n");
	printf("%d",contpositivo," valor(es) positivo(s)\n");
	printf("%d",contnegativo," valor(es) negativo(s)\n");
}