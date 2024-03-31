/*Faça um programa que exibe a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int var_controle = 0, multi_usr, soma_multi = 0;

    while( var_controle <= 1000 ) {
        if( var_controle % 3 == 0 || var_controle % 5 == 0) {
            multi_usr = var_controle;
            /*printf("%d\n",multi_usr);*/
            soma_multi = soma_multi + multi_usr;
            
        }
        var_controle++;
    }
    printf("A soma dos numeros multiplos de 3 e 5, entre 1 ate 1000, e: %d\n",soma_multi);

    system("pause");
    return 0;
}