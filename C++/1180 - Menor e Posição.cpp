# include <iostream>
	# include <stdio.h>
	using namespace std;
	int main (){
		int X[1000];
		int S,P,N;
		S = X[0];
		cin >> N;
		for (int i=0; i<N; i++){
			cin >>X[i];
		}
		for (int i=0; i<N; i++){
			if (X[i] < S){
				S = X[i];
				P = i;
			}
		}
		cout <<"Menor valor: "<<S<<endl;
		cout <<"Posicao: "<<P<<endl;
	}