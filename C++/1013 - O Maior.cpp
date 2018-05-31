    # include <iostream>
	# include <stdio.h>
	using namespace std;
	int main (){
    int v1,v2,v3,a,b,maiorab;
    cin >> v1>>v2>>v3;
    a=v1;
    b=v2;
    maiorab=(a+b+abs(a-b))/2;
    a=maiorab;
    b=v3;
    maiorab=(a+b+abs(a-b))/2;
    cout <<maiorab<<" eh o maior"<<endl;
    return 0;
    }