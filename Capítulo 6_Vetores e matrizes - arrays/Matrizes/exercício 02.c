/*Faça um programa que leia uma matriz de tamanho 4x4.
Imprima na tela o maior valor contido nela e a sua localização (linha e colina)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4];
    int i, j, x, y, maior;

    //Ler os valores da matriz//
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Digite o valor de matriz[%d][%d]: ",i , j);
            scanf("%d",&matriz[i][j]);
        }
    }

    //Calcular o maior e a sua localização na matriz//
    maior = matriz[0][0];
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                x = i;
                y = j;
            }
        }
    }    

    printf("O maior valor da matriz e %d, e esta na linha %d e coluna %d\n",maior, x, y);

    system("pause");
    return 0;
}