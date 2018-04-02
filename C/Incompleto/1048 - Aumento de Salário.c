//presentation
#include <stdio.h>
int main (){
	float Salario,Reajuste,NovoSalario;
	int percentual;
	scanf("%f",&Salario);
	if (Salario <= 400.00){
		percentual = 15;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		printf("\n");
		printf ("Reajuste ganho: %.2f",Reajuste);
		printf("\n");
		printf("Em percentual: %d",percentual); 
		printf ("% \n");  
	}
	else if ((Salario >= 400.01) && (Salario <= 800.00)){
		percentual = 12;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		printf("\n");
		printf ("Reajuste ganho: %.2f",Reajuste);
		printf("\n");
		printf("Em percentual: %d",percentual); 
		printf ("% \n");  
	}
	else if ((Salario >= 800.01) && (Salario <= 1200.00)){
		percentual = 10;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		printf("\n");
		printf ("Reajuste ganho: %.2f",Reajuste);
		printf("\n");
		printf("Em percentual: %d",percentual); 
		printf ("% \n");  
	}
	else if ((Salario >= 1200.01) && (Salario <= 2000.00)){
		percentual = 7;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		printf("\n");
		printf ("Reajuste ganho: %.2f",Reajuste);
		printf("\n");
		printf("Em percentual: %d",percentual); 
		printf ("% \n");  
	}
		else {
		percentual = 4;
		Reajuste =  Salario * percentual/100;
		NovoSalario = Salario + Reajuste; 
		printf ("Novo salario: %.2f",NovoSalario);
		printf("\n");
		printf ("Reajuste ganho: %.2f",Reajuste);
		printf("\n");
		printf("Em percentual: %d",percentual);
		printf ("% \n");
	}
	return 0;
}