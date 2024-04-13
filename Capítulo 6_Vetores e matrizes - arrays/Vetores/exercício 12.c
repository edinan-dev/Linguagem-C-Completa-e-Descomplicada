/*Faça um programa que leia um vetor de 10 posições.
Verifique se existe valores iguais e os escreva na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int vetor[10], contador, controle = 0, repeat;

    for(contador = 0; contador < 10; contador++) {
        printf("Digite um valor para vetor[%d]: ",contador);
        scanf("%d",&vetor[contador]);
    }

    while( controle < 10) {

        for(contador = 0, repeat = 0; contador < 10; contador++) {
            if(vetor[controle] == vetor[contador]) {
                repeat++;
            }
        }
        if(repeat > 1) {
            printf("%d aparece %d vezes\n",vetor[controle], repeat);
        }
        controle++;
    }
    
    system("pause");
    return 0;
}