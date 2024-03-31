/*Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int var_control, num_usr[6];

    for(var_control = 0; var_control < 6; var_control++) {
        printf("Digite um valor inteiro: ");
        scanf("%d",&num_usr[var_control]);
    }
    
    printf("Os numeros sao: ");
    for(var_control = 0; var_control < 6; var_control++) {
        printf("%d ",num_usr[var_control]);
    }
    printf("\n");

    system("pause");
    return 0;

}