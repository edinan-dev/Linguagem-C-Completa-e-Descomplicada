/*Leia uma matriz de tamanho 3x3. Em seguida, imprima a soma dos
valores contidos em sua diagonal principal*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][3];
    int i, j;
    int soma = 0;

   //Ler os números da matriz//
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor de matriz[%d][%d]: ",i + 1 , j + 1);
            scanf("%d",&matriz[i][j]);
        }
    }

    //Somar os elementos da diagonal principal//
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j) {
                soma = soma + matriz[i][j];
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

    printf("A soma dos elementos da diagonal principal e %d\n", soma);

    system("pause");
    return 0;
}