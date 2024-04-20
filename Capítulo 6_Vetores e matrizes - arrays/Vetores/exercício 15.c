/*Leia um vetor com 10 números de ponto flutuante.
Em seguida, ordene os elementos desse vetor e 
imprima o vetor na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    double vetor[10], ordem[10];
    int i;
    
    //Ler os valores do vetor//
    for(i = 0; i < 10; i++){
        printf("Digite o valor de vetor[%d]: ",i);
        scanf("%lf",&vetor[i]);
    }

    

    system("pause");
    return 0;
}