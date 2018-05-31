# include <iostream>
# include <stdlib.h>
using namespace std;
int main (){
	int valor,contpar = 0,contimpar = 0,contpositivo = 0,contnegativo = 0;
	for (int i = 0; i < 5; i++){
		cin >> valor;
		if (valor % 2 == 0){
			contpar++;
		}
		else if (not(valor % 2 == 0)){
			contimpar++;
		}
		if (valor > 0){
			contpositivo++;
		}
		else if (valor < 0){
			contnegativo++;
		}

	}
	cout << contpar << " valor(es) par(es)"<<endl;
	cout << contimpar << " valor(es) impar(es)"<<endl;
	cout << contpositivo << " valor(es) positivo(s)"<<endl;
	cout << contnegativo << " valor(es) negativo(s)"<<endl;
}