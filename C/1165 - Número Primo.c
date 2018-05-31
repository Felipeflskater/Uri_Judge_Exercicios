#include <stdio.h>
int main (){
	int N,X,S,i=0,t=0;
		scanf("%d",&X);
		for (i=0;i < X;i++){
			S=0;
			scanf("%d",&N);
			for (t=1;t <= N;t++){
				if (N % t == 0){
				S = S + 1;
				}	
			}
			if (S == 2){
			printf("%d",N);
			printf(" eh primo\n");
			}
			else{
			printf("%d",N);
			printf(" nao eh primo\n");
			}
		}
 	return 0;
}