# include <iostream>
# include <stdlib.h>
# include <stdio.h>
using namespace std;
int main (){
	int N,q,c;
	cin >> N;
	for (int i = 1; i <= N; i++) {
	q=i*i;
	c=i*i*i;
	cout <<i<<" "<<q<<" "<<c<<endl;
	}
}