/*Faça um programa que declare uma matriz de tamanho 5x5.
Preencha com 1 a diagonal principal e com 0 os demais elementos (linha e coluna)*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5];
    int i, j;

    //Calcular matriz identidade//
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++) {
            if(i == j) {
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }
        }
    }

    //Imprimir na tela a matriz//
     for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}