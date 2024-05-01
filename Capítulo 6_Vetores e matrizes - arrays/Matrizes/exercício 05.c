/*Leia uma matriz de tamanho 4x4. Em seguida, conte e escreva
na tela quantos valores negativos ela possui.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4];
    int i, j;
    int contador = 0;

    //Ler os valores da matriz//
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Digite o valor de matriz[%d][%d]: ",i , j);
            scanf("%d",&matriz[i][j]);
        }
    }

    //Calcular quantos valores são maiores do que 10//
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] < 0) {
                contador++;
            }
        }
    }    

    printf("A matriz pussui %d valores negatidos.\n",contador);

    system("pause");
    return 0;
}