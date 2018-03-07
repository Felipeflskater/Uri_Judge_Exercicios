#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	float Salario,percentual,Reajuste,NovoSalario;
	cin >> Salario;
	if (Salario <= 400.00){
		percentual = 15;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		cout << endl;
		printf ("Reajuste ganho: %.2f",Reajuste);
		cout << endl;
		cout << "Em percentual: " << percentual << " %" << endl;
	}
	else if ((Salario >= 400.01) && (Salario <= 800.00)){
		percentual = 12;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		cout << endl;
		printf ("Reajuste ganho: %.2f",Reajuste);
		cout << endl;
		cout << "Em percentual: " << percentual << " %" << endl;
	}
	else if ((Salario >= 800.01) && (Salario <= 1200.00)){
		percentual = 10;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		cout << endl;
		printf ("Reajuste ganho: %.2f",Reajuste);
		cout << endl;
		cout << "Em percentual: " << percentual << " %" << endl;
	}
	else if ((Salario >= 1200.01) && (Salario <= 2000.00)){
		percentual = 7;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		cout << endl;
		printf ("Reajuste ganho: %.2f",Reajuste);
		cout << endl;
		cout << "Em percentual: " << percentual << " %" << endl;
	}
		else {
		percentual = 4;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		cout << endl;
		printf ("Reajuste ganho: %.2f",Reajuste);
		cout << endl;
		cout << "Em percentual: " << percentual << " %" << endl;
	}
}