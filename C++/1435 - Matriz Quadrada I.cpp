#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <limits.h>

using namespace std;

int main(){
    int n, l, k, c, nivel, valor = 1;
    
    do{
       cin >> n;
       
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
                  cout << endl;
            }
            cout << endl;
       }
    } while(n != 0);   
    
    system("PAUSE");  
}