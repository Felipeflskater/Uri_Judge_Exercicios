	# include <iostream>
	# include <stdio.h>
	using namespace std;
	int main (){
	int V[10];
	int c,D,A=0;
	cin >>D;
	for (int i=0;i < 10; i++){
		if (i > 0){
		V[i] = D + V[i - 1];
		D = V[i];
		}
		else{
		V[i] = D;
		}
	}
	for (int i = 0;i < 10; i++){
		cout <<"N["<<i<<"]"<<" = "<<V[i]<<endl;
	}
	}