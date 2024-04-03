/*EScreva um programa que leia do teclado um vetor de 10 posições.
Escreva na tela quantos valores pares foram armazenados nesse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], contador, par;

    for(contador = 0, par = 0; contador < 10; contador++) {
        printf("Digite um valor: ");
        scanf("%d",&vetor[contador]);

        if( vetor[contador] % 2 == 0) {
            par++;
        }
    }

    printf("Existem %d numeros pares no vetor.\n",par);

    system("pause");
    return 0;
}