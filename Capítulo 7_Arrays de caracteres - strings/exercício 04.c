/*Sem usar a função strlen(), faça um programa que leia uma string
e imprima quantos caracteres ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20];
    int i, indice;

    //Ler a string str//
    printf("Digite um a frase: ");
    gets(str);
    for(i = 0; i < sizeof(str); i++) {
       
    }

    for(;indice >=0; indice--) {
        printf("%c",str[indice]);
    }
    printf("\n");

    system("pause");
    return 0;
} 