/*Calcular e imprimir na tela  uma matriz de tamanho 10x10, 
em que seus elementos são da forma
A[i][j] = {2i+7i-2 se i > j; 3i^2-1 se i= j; 4i^3+5j^2+1 se i > j}*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[10][10];
    int i, j;

    //Calcular matriz//
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(i < j) {
                matriz[i][j] = 2*i+7*j-2;
            } else{
                if(i == j) {
                    matriz[i][j] = 3*i*i-1;
                } else {
                    matriz[i][j] = 4*i*i*i+5*j*j+1;
                }
            }
        }
    }

    //Imprimir na tela a matriz//
    printf("A matriz digitada e:\n");
     for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}