#include <stdio.h>
int main (){
	int C,A,B,N,i=0;
	A=0;
	B=0;
	C=1;
	scanf("%d",&N);
	for (i = 0; i < N;i++){
	printf("%d",B);
	A=B;
	B=C;
	C=B+A;
	if (i < N - 1){
	printf(" ");
	}
	}
	printf("\n");
	return 0;
}