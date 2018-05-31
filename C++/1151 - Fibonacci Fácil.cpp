# include <iostream>
# include <stdio.h>
using namespace std;
int main (){
	int C,A,B,N;
	A=0;
	B=0;
	C=1;
	cin >> N;
	for (int i = 0; i < N;i++){
	cout <<B;
	A=B;
	B=C;
	C=B+A;
	if (i < N - 1){
	cout <<" ";
	}
	}
	cout <<endl;
}