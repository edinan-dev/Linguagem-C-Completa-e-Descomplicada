/*Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;
    int var_controle = 1;
    int num_usr;
    float num_media;

    while( var_controle <= 10) {
        printf("Digite um numero: ");
        scanf("%d",&num_usr);

        if( num_usr >= 0) {
            soma = soma + num_usr;
            var_controle = var_controle + 1;
        }
    }
    num_media = soma / 10;
    printf("A soma e: %d\nA media e: %f",soma, num_media);
    system("pause");
    return 0;
}