/*Faça um programa que preenchaum vetor de tamanho 100 com os 100
primeiros números naturais que não são múltiplos de 7. Ao final,
imprima esse vetor na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor_multiplo[100], controlex, controley;

    for(controlex = 7, controley = 0; controley < 100; controlex++) {
        if(controlex % 7 != 0) {
            vetor_multiplo[controley] = controlex;
            controley++;
        }
    }

    printf("Os 100 primeiros numeros que nao sao multiplos de 7 sao:\n");
    for( controlex = 0; controlex < 100; controlex++) {
        printf("%d\n",vetor_multiplo[controlex]);
    }

    

    system("pause");
    return 0;
}