/*Faça um programa que leia cinco valores e os armazene em um vetor.
Em seguida, mostre todos os valores lidos juntamente com a média dos valores*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma, var_control, num_usr[5];
    float media;
    for (var_control = 0, soma = 0; var_control < 5; var_control++) {
        printf("Digite um valor: ");
        scanf("%d",&num_usr[var_control]);

        soma = soma + num_usr[var_control];
    }

     printf("Os numeros sao: ");
    for(var_control = 0; var_control < 5; var_control++) {
        printf("%d ",num_usr[var_control]);
    }
    media = soma / 5;
    printf("\n");

    printf("A media e: %f\n",media);

    system("pause");
    return 0;
}