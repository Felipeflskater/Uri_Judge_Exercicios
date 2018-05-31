#include<stdio.h>

int main(){
    int n, l, k, c, nivel, valor = 1;
    
    do{
       scanf("%d",&n);
       if(n != 0){
            int m[n][n];
            
            if(n % 2 == 0)
                 nivel = n / 2;
            else 
                 nivel = (n + 1) / 2;     
            
            for(k = 0; k < nivel; k++){
                for(l = 0 + k; l < n - k; l++){
                      for(c = 0 + k; c < n - k; c++){
                            m[l][c] = k + 1;
                      }
                }
            }            
                        
            for(l = 0; l < n; l++){
                  for(c = 0; c < n; c++){
                        if(c == n - 1)     
                             printf("%3d", m[l][c]);
                        else
                             printf("%3d ", m[l][c]);                 
                  }
                  printf ("\n");
            }
            printf ("\n");
       }
    } while(n != 0);   
    
    system("PAUSE");  
}