	# include <iostream>
	# include <stdio.h>
	using namespace std;
	int main (){
		double m[12][12],soma=0.0,media=0.0;
		int linha;
		char opcao;
		cin >> linha>>opcao;
		for (int l = 0;l < 12;l++){
		for (int c = 0;c < 12;c++){
			cin >>m[l][c];
		}
		}
		for (int i = 0;i < 12;i++){
			soma = soma + m[linha][i];
		}
		if (opcao == 'S'){
			printf("%.1f",soma);
		}
		else if(opcao == 'M'){
			printf("%.1f",soma/12);
		}
		cout << endl;
	}