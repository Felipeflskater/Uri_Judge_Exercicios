#include <stdio.h>
int main (){
	int N1,N2,N3;
	scanf ("%d%d%d",&N1,&N2,&N3);
	if (N1 < N2 && N1 < N3){
		if (N2 < N3){
			printf("%d",N1);
			printf("\n");
			printf("%d",N2);
			printf("\n");
			printf("%d",N3);
			printf("\n");
		}
		else if (N2 > N3){
			printf("%d",N1);
			printf("\n");
			printf("%d",N3);
			printf("\n");
			printf("%d",N2);
			printf("\n");
		}
	}
	else if (N1 > N2 && N2 < N3){
		if (N1 < N3){
			printf("%d",N2);
			printf("\n");
			printf("%d",N1);
			printf("\n");
			printf("%d",N3);
			printf("\n");
		}
		else if (N1 > N3){
			printf("%d",N2);
			printf("\n");
			printf("%d",N3);
			printf("\n");
			printf("%d",N1);
			printf("\n");
		}
	}
	else if (N1 > N3 && N2 > N3){
		if (N1 < N2){
			printf("%d",N3);
			printf("\n");
			printf("%d",N1);
			printf("\n");
			printf("%d",N2);
			printf("\n");
		}
		else if (N1 > N2){
			printf("%d",N3);
			printf("\n");
			printf("%d",N2);
			printf("\n");
			printf("%d",N1);
			printf("\n");
		}
	}
	printf("%d",N1);
	printf("\n");
	printf("%d",N2);
	printf("\n");
	printf("%d",N3);
	printf("\n");
    return 0;
}