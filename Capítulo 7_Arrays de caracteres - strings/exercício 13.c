/*Escreva um programa que recebe uma string S e dois valores inteiros não
negativos i e j. Em seguida, imprima os caracteres contidos no segmento
que vai de i a j da string.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char S[20];
    int i, j;

    //Ler string S//
    printf("Digite a string: ");
    fgets(S, 20, stdin);
    S[strcspn(S, "\n")] = '\0';

    //Ler os valores de i e j//
    printf("Digite o valor de i: ");
    scanf("%d",&i);
    printf("Digite o valor de j: ");
    scanf("%d",&j);

    //Imprimir trecho da string//
    for(;i <= j; i++){
        printf("%c",S[i]);
    }
    printf("\n");

    system("pause");
    return 0;
} 