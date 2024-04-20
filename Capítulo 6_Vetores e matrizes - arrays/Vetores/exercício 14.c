/*Faça um programa que calculce o desvio-padrão d de um vetor V
contendo n números em que m é média desse vetor. Considere n = 10.
O vetor v deve ser lido do teclado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double vetor[10];
    int i;
    double media_vetor, desvio_padrao;

    //Ler os valores do vetor//
    for(i = 0; i < 10; i++){
        printf("Digite o valor de vetor[%d]: ",i);
        scanf("%lf",&vetor[i]);
    }

    //Calcular a média dos valores do vetor//
    for(i = 0, media_vetor = 0; i < 10; i++) {
        media_vetor = media_vetor + vetor[i];
    }

    //Calcular desvio-padrão//
    for(i = 0, desvio_padrao = 0; i < 10; i++) {
        desvio_padrao = desvio_padrao + sqrt((1/19)*(vetor[i]-media_vetor));
    }

    printf("O desvio-padrao e: %f\n",desvio_padrao);

    system("pause");
    return 0;
}