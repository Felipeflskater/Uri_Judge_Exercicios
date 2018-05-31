#include <stdio.h>
int main (){
    int v1,v2,v3,a,b,maiorab;
    scanf("%d%d%d",&v1,&v2,&v3);
    a=v1;
    b=v2;
    maiorab=(a+b+abs(a-b))/2;
    a=maiorab;
    b=v3;
    maiorab=(a+b+abs(a-b))/2;
    printf("%d",maiorab);
    printf(" eh o maior\n");
    return 0;
    }