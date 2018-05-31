#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int N,m,s,h;
	cin >> N;
	m = N/60;
	s = N%60;
	h = m/60;
	m = m%60;
	cout << h << ":" << m << ":" << s << endl;
}