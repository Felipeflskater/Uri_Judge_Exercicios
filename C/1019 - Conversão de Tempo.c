#include <stdio.h>
int main (){
	int N,m,s,h;
	scanf ("%d",&N);
	m = N/60;
	s = N%60;
	h = m/60;
	m = m%60;
	printf ("%d",h);
	printf (":%d",m);
	printf (":%d",s);
	printf ("\n");
}