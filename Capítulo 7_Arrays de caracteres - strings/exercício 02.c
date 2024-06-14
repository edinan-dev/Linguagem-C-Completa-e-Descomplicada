/*Faça um programa que leia uma string e a imprima as quatro
primeiras letra na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[10];
    int i;

    //Ler a string//
    printf("Digite uma frase: ");
    gets(str);

    for(i = 0; i < 4; i++) {
        printf("%c",str[i]);
    }
    printf("\n");

    system("pause");
    return 0;
} 