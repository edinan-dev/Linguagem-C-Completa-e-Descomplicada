/*Faça um programa que leia uma matriz de tamanho 5x5.
Calcule e imprima a soma dos elementos dessa matriz que
estão acima da diagonal principal.*/

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

    //Soma valores acima da diagonal principal//
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i < j) {
                soma = soma + matriz[i][j];
            }
        }
    }
    printf("\n");

    //Exibe o resultado na tela//
    printf("A soma dos valores acima da diagonal principal e: %d\n",soma);

    system("pause");
    return 0;
}