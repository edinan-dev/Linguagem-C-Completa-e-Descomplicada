/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, apartir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos desse sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 34.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num_usr, num_count = 1;
    int x, y, z;

    printf("Digite um numero: ");
    scanf("%d",&num_usr);

    for( x = 0, y = 1, z = 0; num_count <= num_usr;) {
        
        if ( num_count == num_usr) {
            printf("O %d termo da sequencia de Fibonacci e : %d\n",num_usr, z);
        }
        num_count++;
        x = y;
        y = z;
        z = x + y;

        
    }

    system("pause");
    return 0;
}