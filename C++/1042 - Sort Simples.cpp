#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	int N1,N2,N3;
	cin >> N1 >> N2 >> N3;
	if (N1 < N2 && N1 < N3){
		if (N2 < N3){
			cout << N1 << endl;
			cout << N2 << endl;
			cout << N3 << endl;
		}
		else if (N2 > N3){
			cout << N1 << endl;
			cout << N3 << endl;
			cout << N2 << endl;
		}
		
	}
	else if (N1 > N2 && N2 < N3){
		if (N1 < N3){
			cout << N2 << endl;
			cout << N1 << endl;
			cout << N3 << endl;
		}
		else if (N1 > N3){
			cout << N2 << endl;
			cout << N3 << endl;
			cout << N1 << endl;
		}
		
	}
	else if (N1 > N3 && N2 > N3){
		if (N1 < N2){
			cout << N3 << endl;
			cout << N1 << endl;
			cout << N2 << endl;
		}
		else if (N1 > N2){
			cout << N3 << endl;
			cout << N2 << endl;
			cout << N1 << endl;
		}
		
	}
	cout << endl;
	cout << N1 << endl;
	cout << N2 << endl;
	cout << N3 << endl;
	}
	