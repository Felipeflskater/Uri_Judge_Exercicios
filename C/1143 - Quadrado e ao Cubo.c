#include <stdio.h>
int main (){
	int N,q,c,i=0;
	scanf ("%d",&N);
	for (i = 1; i <= N; i++) {
	q=i*i;
	c=i*i*i;
	printf("%d",i);
	printf(" %d",q);
	printf(" %d",c);
	printf("\n");
	}
	return 0;
}