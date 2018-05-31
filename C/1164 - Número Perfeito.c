#include <stdio.h>
int main (){
	int N,X,S,i=0,t=0;
		scanf("%d",&X);
		for (i=0;i < X;i++){
			S=0;
			scanf("%d",&N);
			for (t=1;t < N;t++){
				if (N % t == 0){
				S = S + t;
				}	
			}
			if (N == S){
			printf("%d",N);
			printf(" eh perfeito\n");
			}
			else{
			printf("%d",N);
			printf(" nao eh perfeito\n");
			}
		}
 	return 0;
}