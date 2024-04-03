/*Faça um programa que receba do usuário um vetor X com 10 posições.
Em seguida deverão ser impressos o maior e o menor elemento desse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], contador, maior, menor;

    for(contador = 0, maior = 0; contador < 10; contador++) {
        printf("Digite um valor: ");
        scanf("%d",&vetor[contador]);

        if( vetor[contador] > maior) {
            maior = vetor[contador];
        }
    }
    for(contador = 0, menor = maior; contador < 10; contador++) {
        if( vetor[contador] < menor) {
            menor = vetor[contador];
        }
    }

    printf("O maior numero do vetor e %d e o menor e %d\n",maior, menor);

    system("pause");
    return 0;
}