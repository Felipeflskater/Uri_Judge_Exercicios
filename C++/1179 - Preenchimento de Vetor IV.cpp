# include <iostream>
	# include <stdio.h>
	using namespace std;
	int main (){
		int pares [5],impares[5],ii=0,pi=0,valor;
		for (int i=0;i < 15 ;i++){
			cin >> valor;
			
			if (valor % 2 ==0){
				pares[pi]=valor;
				pi++;
				if (pi == 5){
					for (int j=0;j<5;j++){
						cout <<"par["<<j<<"] = "<<pares[j]<<endl;
					}
				  pi=0;
				}
			}
			
			else{
				impares[ii]=valor;
				ii++;
				if (ii == 5){
					for (int j=0;j<5;j++){
						cout <<"impar["<<j<<"] = "<<impares[j]<<endl;
					}
				  ii=0;
				}
			}
			if (ii < 5 && i == 14){
				 for (int j=0;j<ii;j++){
						cout <<"impar["<<j<<"] = "<<impares[j]<<endl;
					}	
				}
			if (pi < 5 && i == 14){
				 for (int j=0;j<pi;j++){
						cout <<"par["<<j<<"] = "<<pares[j]<<endl;
					}	
				}
			
		}
	}