/*Faça um programa que receba do usuário dois arrays, A e B,
com 10 números inteiros cada. Crie um nuvo array C Calculando C = A - B.
Mostre na telaos dados do array C.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    signed int A[10],B[10],C[10];
    int controle;

    for( controle = 0; controle < 10; controle++) {
        printf("Digite um valor para A[%d] = ",controle);
        scanf("%d",&A[controle]);
    }
    
    printf("\n");
    
    for( controle = 0; controle < 10; controle++) {
        printf("Digite um valor para B[%d] = ",controle);
        scanf("%d",&B[controle]);
    }


    printf("Os valores de C sao:\n");
    for( controle = 0; controle < 10; controle++) {
        C[controle] = A[controle] - B[controle];
        printf("C[%d] = %d\n",controle, C[controle]); 
    }

    system("pause");
    return 0;
}