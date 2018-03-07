# include <iostream>
# include <stdio.h>
using namespace std;
int main (){
 int N,F;
 cin >>N;
 F=1;
 for(int i=0;i < N;i++){
	F=F * (N-i); 
 }
 cout <<F<<endl;
}