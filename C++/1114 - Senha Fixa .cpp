# include <iostream>
# include <stdlib.h>
using namespace std;
int main (){
	int senha;
	cin >>senha;
		do{
		cout << "Senha Invalida" << endl;
		cin >> senha;
		if (senha == 2002){
		cout <<	"Acesso Permitido" << endl;	
		}
		}
		while (not (senha == 2002));
}