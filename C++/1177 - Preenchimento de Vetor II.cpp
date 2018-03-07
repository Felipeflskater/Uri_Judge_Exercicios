# include <iostream>
	# include <stdio.h>
	using namespace std;
	int main (){
		int N[1000];
		int T=0;
		cin >>T;
		for (int i=0; i < 1000; i++){
		 	N[i] = i % T ;
		}
		for (int i = 0; i < 1000; i++){
		  cout <<"N["<<i<<"]"<<" = "<<N[i]<<endl;
		}
	}