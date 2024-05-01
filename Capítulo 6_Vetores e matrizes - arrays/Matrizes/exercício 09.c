/*Faça um programa que permita ao usuário entrar com uma matriz de tamanho
3x3 de números inteiros. Em seguida, calcule um vetor contendo três posições,
em que cada posição deverá armazenar a somados números de cada coluna da matriz.
Exiba esse array.
Por exemplo, a matriz 
           5  -8  10
           1   2  15
          25  10   7
Deverá gerá o vetor 31 4 32*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][3], vetor[3];
    int i, j;

    //Ler os números da matriz//
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor de matriz[%d][%d]: ",i, j);
            scanf("%d",&matriz[i][j]);
        }
    }

    //Somar as colunas e armazenar a soma no vetor//
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(j == 0) {
                vetor[0] = vetor[0] + matriz[i][j];
            } else {
                if(j == 1) {
                    vetor[1] = vetor[1] + matriz[i][j];
                } else {
                    if(j == 2) {
                        vetor[2] = vetor[2] + matriz[i][j];
                    } else {
                        printf("Error\n");
                    }
                }
            }
        }
    }

    //Imprimir na tela a matriz//
    printf("A matriz digitada e:\n");
     for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        printf("A soma da coluna %d, e : %d\n",i, vetor[i]);
    }
    system("pause");
    return 0;
}