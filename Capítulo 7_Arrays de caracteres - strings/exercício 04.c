/*Sem usar a função strlen(), faça um programa que leia uma string
e imprima quantos caracteres ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20];
    int i;

    //Ler a string str//
    printf("Digite um a frase: ");
    gets(str);
    
    //Imprime a string ao contrário//
    for(i = strlen(str); i >= 0; i--) {
        printf("%c",str[i]);
    }

    printf("\n");

    system("pause");
    return 0;
} 