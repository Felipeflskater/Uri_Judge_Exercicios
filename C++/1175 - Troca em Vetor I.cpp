	# include <iostream>
	# include <stdio.h>
	using namespace std;
	int main (){
		int N[20];
		int Z[20];
		int a=0,c;
		c=20-1;
		for (int i=0;i <= c; i++){
			cin >> N[i];
		}
		for (int i = c;i >= 0 ; i--){
			Z[i] = N[a];
			a++;
		}
		for (int i=0;i <= c; i++){
			N[i] = Z[i];
		}
		for (int i=0;i <= c; i++){
			cout << "N["<<i<<"] = "<<N[i]<<endl;
		}
	}