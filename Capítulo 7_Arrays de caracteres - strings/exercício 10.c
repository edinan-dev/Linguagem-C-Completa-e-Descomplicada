/*Escreva um programa que leia uma string do teclado e converta 
todos os seus caractere para maiúscula. Dica: subtraia 32 dos caracteres
cujo código ASCII está entre 65 e 90.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str_1[20];
    int i;

    //Ler string 01//
    printf("Digite a frase: ");
    fgets(str_1, 20, stdin);
    str_1[strcspn(str_1, "\n")] = '\0';

    for(i = 0; str_1[i] != '\0'; i++) {
        if(str_1[i] == 32) {
            continue;
        }
        str_1[i] = str_1[i] - 32;
    }

    puts(str_1);
    system("pause");
    return 0;
} 