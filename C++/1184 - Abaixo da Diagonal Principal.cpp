# include <iostream>
# include <stdio.h>
# include <cstdlib>
# include <limits.h>
using namespace std;
int main (){
	int l,c;
	double M[12][12],soma=0.0,acm=0.0,media=0.0;
	char t;
	cin >> t;
	for (int l=0;l<12;l++){
		for (int c=0;c<12;c++){
			cin >> M[l][c];
		}
	}
	for (int l=0;l<12;l++){
		for (int c=0;c<12;c++){
			if (l > c){
			 soma = soma + M[l][c];
			 acm++;
			}
		}
	}
	media=soma/acm;
	if (t == 'S'){
		printf ("%.1f",soma);
	}
	else if (t == 'M'){
		printf ("%.1f",media);	
	}
	cout << endl;
}