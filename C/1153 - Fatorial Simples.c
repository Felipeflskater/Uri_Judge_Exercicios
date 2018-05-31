#include <stdio.h>
int main (){
 int N,F,i=0;
 scanf("%d",&N);
 F=1;
 for(i=0;i < N;i++){
	F=F * (N-i); 
 }
 printf("%d",F); 
 printf("\n");
}