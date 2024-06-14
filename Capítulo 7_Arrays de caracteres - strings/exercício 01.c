/*Faça um programa que leia uma string e a imprima na tela*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[10];

    printf("Digite uma frase: ");
    gets(str);

    printf("A frase e: %s\n",str);

    system("pause");
    return 0;
} 