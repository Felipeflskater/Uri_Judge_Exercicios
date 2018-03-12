#include<stdio.h>

int main(){
    int l, c, cont = 12;
    double m[12][12], soma = 0.0, div = 0.0;
    char t;
    
    scanf ("%C",t);
    
    for(l = 0; l < 12; l++){
         for(c = 0; c < 12; c++){ 
             scanf ("%D%D",l,c);
         }    
    }
    
    for(l = 0; l <= 4; l++){
          for(c = 1 + l; c <= 10 - l; c++){
             soma = soma + m[l][c];
             div++;
          }
    }
    
    if(t == 'S'){
         printf("%.1f", soma);
    } else if(t == 'M'){
         printf("%.1f", soma / div);
    }
    
    printf ("\n");
    
    system("PAUSE");  
}  

//resposta errada