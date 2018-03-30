#include <stdio.h>
int main (){
	int N,A,B,C,i;
	scanf ("%d",&N);
	A = 1;
	B = 2;
	C = 3;
	for (i = 1; i <= N;){
		i=i+1;
		printf("%d",A);
		printf(" %d",B);
	    printf(" %d",C);
	    printf(" PUM");
	    printf("\n");;
	A = C + 2;
	B = A + 1;
	C = B + 1;
		}
        return 0;
	}