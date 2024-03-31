/*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num = 0, num_out;

    printf("Type a number: ");
    scanf("%d",&num_out);

    while (num_out >= num) {
        printf("%d\n",num_out);
        num_out = num_out - 1;
    }

    system("pause");
    return 0;
}