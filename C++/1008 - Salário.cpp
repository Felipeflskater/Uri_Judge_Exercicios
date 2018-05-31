#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int THORA,NUMBER;
	float PHORA,SALARY;
	cin >> NUMBER >> THORA >> PHORA;
	SALARY = (THORA * PHORA);
	cout << "NUMBER = " << NUMBER << endl;
	printf ("SALARY = U$ %.2f",SALARY);
	cout << endl;
}