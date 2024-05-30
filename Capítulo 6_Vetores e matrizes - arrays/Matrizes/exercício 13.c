/*Faça um programa que leia uma matriz de tamanho 5x5.
Calcule e imprima a soma dos elementos dessa matriz
que não pertencem à diagonal principal nem à diagonal
secundária*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5];
    int i, j, soma = 0;

    //Ler os valores da matriz//
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite o valor de matriz[%d][%d]: ",i, j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n");

    //Exibe a matriz na tela//
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Calcula a soma dos valores que não pertencem à diagonal primaria e secundária//
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if((i != j) && (i + j != 4)) {
                soma = soma + matriz[i][j];
            }
        }
    }
    printf("\n");

    //Exibe o resultado na tela//
    printf("A soma dos valores que não percencem a diagonal principal e secundaria e: %d\n",soma);

    system("pause");
    return 0;
}