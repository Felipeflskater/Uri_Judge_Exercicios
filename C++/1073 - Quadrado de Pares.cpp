# include <iostream>
# include <stdlib.h>
using namespace std;
int main (){
	int N,quadrado;
	cin >> N;
	for (int i = 1; i <= N; i++){
		if (i % 2 == 0){
			quadrado = i*i;
			cout << i <<"^2 = "<<quadrado <<endl;
		}
	}
		
}