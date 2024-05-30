/*Faça um programa que leia uma matriz A de tamanho 5x5.
Em seguida, calcule e imprima B, sendo que B = A^2.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz_A[5][5], matriz_B[5][5];
    signed int i, j;

    //Ler os valores da matriz//
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite o valor de matriz[%d][%d]: ",i, j);
            scanf("%d",&matriz_A[i][j]);
        }
    }
    printf("\n");

    //Exibe a matriz A na tela//
    printf("MATRIZ A\n"); 
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf(" %d ",matriz_A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Calcula os valores da matriz B//
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz_B[i][j] = matriz_A[i][j] * matriz_A[i][j];
        }
    }
    printf("\n");

    //Exibe a matriz B na tela//
    printf("MATRIZ B\n"); 
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf(" %d ",matriz_B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    system("pause");
    return 0;
}