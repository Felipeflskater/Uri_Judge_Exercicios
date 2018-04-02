#include <stdio.h>
int main (){
	int N,quadrado;
	scanf("%d",&N);
	for (int i = 1; i <= N; i++){
		if (i % 2 == 0){
			quadrado = i*i;
			printf("%d",i,"^2 = %d",quadrado);
		}
	}
		
}