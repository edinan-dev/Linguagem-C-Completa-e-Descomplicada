/*Faça um programa que leia uma matriz de tamanho 3x3.
Imprima na tela o menor valor contido nessa matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][3];
    int i, j;
    int menor;

    //Ler os números da matriz//
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor de matriz[%d][%d]: ",i + 1 , j + 1);
            scanf("%d",&matriz[i][j]);
        }
    }

    //Calcular o menor valor//
    menor = matriz[0][0];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }

    printf("O menor valor digitado e %d\n",menor);

    system("pause");
    return 0;
}