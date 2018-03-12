#include <stdio.h>
int main(){
	int THORA,NUMBER;
	float PHORA,SALARY;
	scanf("%d%d",&NUMBER,&THORA);
	scanf("%f",&PHORA);
	SALARY = (THORA * PHORA);
	printf ( "NUMBER = %d",NUMBER);
	printf ("\n");
	printf ("SALARY = U$ %.2f",SALARY);
	printf ("\n");
}