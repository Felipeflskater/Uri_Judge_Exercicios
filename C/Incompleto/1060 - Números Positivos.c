#include <iostream>
 
using namespace std;
 
int main() {
 
	float n;
	int i=0,cont=0;
	do{
		scanf("%f",n);
		if(n>0){
			cont=cont+1;
		}
		i++;
	}while(i<6);
	printf(cont," valores positivos\n");
 
    return 0;
}