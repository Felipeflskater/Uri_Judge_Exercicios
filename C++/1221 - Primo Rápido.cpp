#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <limits.h>
#include<math.h>

using namespace std;

int main(){
int i,num,count=0,j,n,raiz=0;
while(scanf ("%d",&num)==1){
          for(j=1;j<=num;j++){
                scanf("%d",&n);
                if(n==0 || n==1)
                cout <<"Not Prime"<< endl;
                else{
                 count=1;
                raiz=sqrt(n);
                  for(i=2;i<=raiz;i++){
                    if(n%i==0){
                    count=0;
                     break;
                     }
                  }
                  if(count==1)
                  cout <<"Prime" << endl;
                  else
                  cout <<"Not Prime"<< endl;

            }
          }
}
return 0;
}