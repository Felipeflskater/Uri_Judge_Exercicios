# include <iostream>
# include <stdlib.h>
# include <stdio.h>
using namespace std;
int main (){
	int X,Y;
	cin >>X>>Y;
	while((X != 0)||(Y != 0)){
		if((X == 0) || (Y == 0)){
		X=0;
		Y=0;
		}
		else{
			if (((X > 0)&&(Y > 0))){
			cout <<"primeiro"<<endl;
		}
		else if (((X < 0)&&(Y > 0))){
			cout <<"segundo"<<endl;
		}
		else if (((X < 0)&&(Y < 0))){
			cout <<"terceiro"<<endl;
		}
		else if (((X > 0)&&(Y < 0))){
			cout <<"quarto"<<endl;
		}
		cin >>X>>Y;
		}
	}
}