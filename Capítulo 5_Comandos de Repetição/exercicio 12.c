/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. 
Exemplo: A soma dos divisores do número 66 é 1+ 2 + 3 + 6 + 11 + 22 + 33 = 78*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num_usr;
    int div = 1;
    int div_usr = 0;
    int soma_div = 0;

    printf("DIgite um numero: ");
    scanf("%d",&num_usr);

    printf("Os divisores de %d, sao: ",num_usr);

    while( div < num_usr) {
        if( num_usr % div == 0) {
            div_usr = div;
            soma_div = soma_div + div;
            printf("%d, ",div_usr);
        }
        div++;
        
    }
    printf("\nA soma dos divisores de %d, e: %d\n",num_usr, soma_div);

    system("pause");
    return 0;
}