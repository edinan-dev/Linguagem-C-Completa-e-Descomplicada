/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num = 0, soma = 0;

    while ( num <= 50) {
        if (num%2 == 0) {
            soma = soma + num;
        }
        num++;
    }
    printf("A soma dos 50 primeiros numeros pares e : %d\n", soma);

    system("pause");
    return 0;
} 
