/*Sem usar a função strlen(), faça um programa que leia uma string
e imprima quantos caracteres ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[50];
    int i, caractere = 0;

    //Ler a string str//
    printf("Digite um a frase: ");
    gets(str);

    for(i = 0; i < sizeof(str); i++) {
        if(str[i] == '\0') {
            break;
        }
        else{
            if(str[i] != ' ') {
                caractere++;
            }
        }
    }

    printf("Numero de caracteres: %d\n", caractere);

    system("pause");
    return 0;
} 