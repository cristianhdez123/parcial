﻿

#include <stdio.h>
#include <stdlib.h>

/*
 * author Cristian
 */
int main(){

    int n=0,total=0,amiga=0;
    
     printf("ingresse un tamanio\n");
        scanf("%i",&n);
    
    int matriz[n][n];
    
   for(int j=0;j<n;j++){  
    for(int i=0;i<n;i++){
        printf("ingrese un numero");
        scanf("%i",&matriz[j][i]);
    }
    }

      for(int a=0;a<n;a++){  
                printf("\n"); 

    for(int b=0;b<n;b++){
        printf(" ");
        printf("%i",matriz[a][b]);
    }  
    }
    printf("\n");  
    int columna=n,sumaDiago1=0;
    
    for(int i=n;i>0;i--){
         printf(" ");
       
         sumaDiago1=sumaDiago1+matriz[columna-1][i-1];
        columna--;}
    total=sumaDiago1;
     int columna2=0,sumaDiago2=0;
    
    for(int i=n;i>0;i--){
     
         sumaDiago2=sumaDiago2+matriz[columna2][i-1];
        columna2++;
    }
     
     int sumafil=0,fila=0;
      int sumacol=0,columna3=0;
     
     
     for(int i=0;i<n;i++){
         while(fila<n){
             sumafil=sumafil+matriz[i][fila];
             fila++;
         }
         if(sumafil!=total){
             amiga=0;
         }else{
              
          fila=0;
          sumafil=0;  
          
          while(columna3<n){
             sumacol=sumacol+matriz[columna3][i];
             columna3++;
         }
          if(sumacol!=total){
              amiga=0;
         }else{
        
          printf("\n");
          columna3=0;
          sumacol=0;
     }
          
     if(sumaDiago2!=total){
         amiga=0;
         }else{
       if(sumaDiago1!=total){
           amiga=0;
         }else{
           amiga=1;
         }} }}
      
      if(amiga==1){
          
          printf("es amiga\n");
          
      }else{
          printf("no es amiga\n");
      }
    return 0;
}