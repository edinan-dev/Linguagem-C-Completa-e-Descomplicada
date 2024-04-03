/*Faça um programa que possua um array de nome A que armazene seis números inteiros.
O programa de executar os seguintes passos:
a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array 
e mostre na tela essa soma.
c) Modifique o array na posiçãp 4, atribuindo a essa posição o valor 100.
d) Mostre na tela cada valor do array, um em cada linha.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma, contador;

    soma = A[0] + A[1] + A[5];
    printf("A soma de %d, %d e %d e: %d\n",A[0], A[1], A[5], soma);

    A[4] = 100;

    printf("Os numeros no vetor sao:");
    for(contador = 0; contador < 6; contador++) {
        printf("%d\n",A[contador]);
    }


    system("pause");
    return 0;
}