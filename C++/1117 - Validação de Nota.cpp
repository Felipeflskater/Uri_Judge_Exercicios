# include <iostream>
# include <stdio.h>
# include <stdlib.h>
using namespace std;
int main (){
	float N1,N2,media;
	do{
	cin >> N1;
	if (N1 < 0 || N1 > 10){
		cout << "nota invalida"<<endl;
	} 
	}while(N1 < 0 || N1 > 10);
	do{
	cin >> N2;
	if (N2 < 0 || N2 > 10){
		cout << "nota invalida"<<endl;
	} 
	}while(N2 < 0 || N2 > 10);
media = (N1+N2)/2;
printf ("media = %.2f",media);
cout <<endl;
}