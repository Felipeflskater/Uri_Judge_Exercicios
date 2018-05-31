#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int X,i;
	cin >>X;
	for(i = 1; i <= X;i++){
		if (not (i % 2 == 0)){
			cout << i << endl;
		}
	}
}