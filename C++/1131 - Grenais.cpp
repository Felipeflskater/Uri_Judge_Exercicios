# include <iostream>
# include <stdio.h>
using namespace std;
int main (){
	int emp,grenal,vg,inter,vi,continuar,gremio;
	vi=0;
	vg=0;
	emp=0;
	grenal=0;
	do{
	cin >>inter>>gremio;
	if (inter > gremio){
	vi++;
	}
	else if (inter < gremio){
	vg++;	
	}
	else if (inter == gremio){
	emp++;
	}
	grenal++;
	cout << "Novo grenal (1-sim 2-nao)"<<endl;
	cin >>continuar;
	}while(continuar == 1);
	cout <<grenal<<" grenais"<<endl;
	cout <<"Inter:"<<vi<<endl;
	cout <<"Gremio:"<<vg<<endl;
	cout <<"Empates:"<<emp<<endl;
	if (vi > vg){
	cout <<"Inter venceu mais"<<endl;
	}
	else if (vi < vg){
	cout <<"Gremio venceu mais"<<endl;
	}
}