# include <iostream>
# include <stdlib.h>
# include <stdio.h>
using namespace std;
int main (){
	int N = 0,X=0,Ratos=0,Sapos=0,Coelhos=0;
	double PC=0,PR=0,PS=0,cobaias=0;
	char Y;
	cin >>N;
	for (int i = 1; i <= N; i++) {
		cin >>X>>Y;
		if (Y == 'C'){
		Coelhos = Coelhos + X;
		}
		else if (Y == 'R'){
		Ratos = Ratos + X;
		}
		else if (Y == 'S'){
		Sapos = Sapos + X;
		}
		
	cobaias = cobaias + X;
	}
	PC = (Coelhos * 100)/cobaias;
	PR = (Ratos * 100)/cobaias;
	PS = (Sapos * 100)/cobaias;
	cout << "Total: "<<cobaias<<" cobaias"<<endl;
	cout << "Total de coelhos: "<<Coelhos<<endl;
	cout << "Total de ratos: "<<Ratos<<endl;
	cout << "Total de sapos: "<<Sapos<<endl;
	printf ("Percentual de coelhos: %.2f",PC);
	cout<<" %"<<endl;
	printf ("Percentual de ratos: %.2f",PR);
	cout<<" %"<<endl;
	printf ("Percentual de sapos: %.2f",PS);
	cout<<" %"<<endl;
	
}