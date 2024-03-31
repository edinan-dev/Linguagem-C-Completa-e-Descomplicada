/*Faça um programa que leia um número positivo e imprima seus divisores. Exemplo:  Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num_usr;
    int div = 1;
    int div_usr = 0;

    printf("DIgite um numero: ");
    scanf("%d",&num_usr);

    printf("Os divisores de %d, sao: ",num_usr);

    while( div <= num_usr) {
        if( num_usr % div == 0) {
            div_usr = div;
            printf("%d, ",div_usr);
        }
        div++;
        
    }

    system("pause");
    return 0;
}