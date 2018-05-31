#include <stdio.h>
int main (){
	int emp,grenal,vg,inter,vi,continuar,gremio;
	vi=0;
	vg=0;
	emp=0;
	grenal=0;
	do{
	scanf("%d%d",&inter,&gremio);
	if (inter > gremio){
	vi=vi+1;
	}
	else if (inter < gremio){
	vg=vg+1;	
	}
	else if (inter == gremio){
	emp=emp+1;
	}
	grenal=grenal+1;
	printf( "Novo grenal (1-sim 2-nao)\n");
	scanf("%d",&continuar);
	}while(continuar == 1);
	printf("%d",grenal);
	printf (" grenais");
	printf ("\n");
	printf("Inter:%d",vi);
	printf ("\n");
	printf("Gremio:%d",vg); 
	printf ("\n");
	printf("Empates:%d",emp);
	printf ("\n");
	if (vi > vg){
	printf("Inter venceu mais\n");
	}
	else if (vi < vg){
	printf("Gremio venceu mais\n");
	}
	return 0;
}