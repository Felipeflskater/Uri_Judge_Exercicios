# include <iostream>
# include <stdlib.h>
# include <stdio.h>
using namespace std;
int main (){
	int N,X,S;
		cin >> X;
		for (int i=0;i < X;i++){
			S=0;
			cin >> N;
			for (int t=1;t <= N;t++){
				if (N % t == 0){
				S = S + 1;
				}	
			}
			if (S == 2){
			cout <<N<<" eh primo"<<endl;
			}
			else{
			cout <<N<<" nao eh primo"<<endl;
			}
		}
 	
}