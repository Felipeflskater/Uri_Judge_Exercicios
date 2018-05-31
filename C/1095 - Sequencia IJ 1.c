#include <stdio.h>
int main (){
	int I,J;
	I=1;
	J=60;
	while (J >= 0){
	 printf("I=%d",I);
	 printf(" J=%d",J);
	 printf("\n");
	 I=I+3;
	 J=J-5;
	}
	return 0;
}