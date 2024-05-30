/*Faça um programa que leia uma matriz de tamanho 5x5.
Calcule a soma dos elementos dessa matriz que pertencem
à diagonal principal ou diagonal secundária. Calcule também
a soma dos elementos dessa matriz que não pertencem a nenhuma 
das duas diagonais. Imprima na tela a diferença entre os dois valores*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5];
    signed int i, j, soma_diagonais = 0, soma_nao_diagonais = 0;

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

    /*Calcula a soma dos valores que pertencem à diagonal primaria e secundária
    e a soma dos valores que não pertencem de forma separada*/
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if((i == j) || (i + j == 4)) {
                soma_diagonais = soma_diagonais + matriz[i][j];
            }
            else {
                soma_nao_diagonais = soma_nao_diagonais + matriz[i][j];
            }
        }
    }
    printf("\n");
    printf("%d\n",soma_diagonais);
    printf("%d\n",soma_nao_diagonais);

    //Exibe o resultado na tela//
    printf("A diferença da soma dos valores das diagonais pelos valore que nao estao nas diagonais e: %d\n",soma_diagonais - soma_nao_diagonais);

    system("pause");
    return 0;
}