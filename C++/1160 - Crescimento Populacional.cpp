# include <iostream>
# include <stdio.h>
using namespace std;
int main(){
	int T,anos=0;
	long long int PA,PB;
	double G1,G2;
	cin >>T;
	for (int i=0;i < T;i++){
		cin >>PA>>PB;
		cin >>G1>>G2;
		anos=0;
		do{
			PA = PA +(PA * G1)/100;
			PB = PB +(PB * G2)/100;
			anos++;
			if (anos > 100){
				break;
			}
		}while(PA <= PB);
		if(anos > 100){
			cout <<"Mais de 1 seculo."<<endl;
		}
		else{
			cout <<anos<<" anos."<<endl;
		}
	}
	
}