/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int maior;
    int menor;
    int num_usr;
    int controle = 1;


    while (controle <=10) {
       if (controle == 1) {
        printf("Digite um numero: ");
        scanf("%d",&num_usr);

        maior = num_usr;
        menor = num_usr;
        controle  = controle + 1;
       }

       else {
        printf("Digite um numero: ");
        scanf("%d",&num_usr);

        if (num_usr >= maior) {
            maior = num_usr;
        }

        if (num_usr <= menor) {
            menor = num_usr;
        }

    controle = controle + 1;
    }
       }
       

    printf("O maior numero digitado e: %d\nO menor e: %d\n",maior, menor);
    system("pause");
    return 0;
}