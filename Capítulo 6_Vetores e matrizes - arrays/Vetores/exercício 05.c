/*Faça um programa que leia um vetor de oito posições.Em seguida,
leia também dois valores X e Y quaisquer correspondentes a duas 
posiçoes no vetor. Seu programa deverá exibir a soma dos valores
encontrados nas respectivas posições X e Y.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[8], contador, X, Y, soma;

    for(contador = 0; contador < 8; contador++) {
        printf("Digite um valor: ");
        scanf("%d",&vetor[contador]);
    }

    printf("Digite o valor de X: ");
    scanf("%d",&X);

    printf("Digite o valor de Y: ");
    scanf("%d",&Y);

    if( (X <= 8 && X >= 0) || (Y <= 8 && Y >= 0)) {
        soma = vetor[X] + vetor[Y];

        printf("A soma de %d e %d e %d\n",vetor[X], vetor[Y], soma);
    }
    else {
        printf("ERROR\n");
    }

    system("pause");
    return 0;
}