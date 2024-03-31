/*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0até N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num, num_out = 0;

    printf("Type a number: ");
    scanf("%d",&num);

    while (num_out <= num) {
        printf("%d\n",num_out);
        num_out++;
    }

    system("pause");
    return 0;
}