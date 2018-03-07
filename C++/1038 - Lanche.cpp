#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	int Codigo;
	float Total,Quantidade;
	cin >> Codigo>> Quantidade;
	switch (Codigo){
		case 1:
			Total = Quantidade * 4.00;
		break;
		case 2:
			Total = Quantidade * 4.50;
		break;
		case 3:
			Total = Quantidade * 5.00;
		break;
		case 4:
			Total = Quantidade * 2.00;
		break;
		case 5:
			Total = Quantidade * 1.50;
		break;
		default:
		 cout << "Lanche invalido" << endl;
		 break;
	}
		printf ("Total: R$ %.2f",Total);
		cout << endl;
}