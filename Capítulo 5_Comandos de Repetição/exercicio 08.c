/*Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int soma = 0;
    int contador = 1;
    double num;
    double media_num;

    while (contador <= 10) {
        printf("Digite um numero: ");
        scanf("%lf",&num);

        soma = soma + num;
        contador = contador + 1;
    }
    media_num = soma / 10;
    printf("A media dos dez numero digitados e: %lf\n",media_num);

    return 0;
}