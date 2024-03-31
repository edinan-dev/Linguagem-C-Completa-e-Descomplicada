/*Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int soma = 0;
    int contador = 1;
    int num;

    while (contador <= 10) {
        printf("Digite um numero: ");
        scanf("%d",&num);

        soma = soma + num;
        contador = contador + 1;
    }

    printf("A soma dos dez numero digitados e: %d\n",soma);

    return 0;
}