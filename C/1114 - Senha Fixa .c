#include <stdio.h>
int main (){
	int senha;
		do{
		printf("%D",senha);
		if (senha == 2002){
			printf	("Acesso Permitido\n");	
		}
		else{
			printf	("Senha Invalida\n");	
		}
		}
		while (not (senha == 2002));
}