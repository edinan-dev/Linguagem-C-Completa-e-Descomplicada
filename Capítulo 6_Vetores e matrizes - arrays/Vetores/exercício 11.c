/*Leia um conjunto de números reais, armazenado-o em um vetor. Em seguida
calcule o quadrado de cada elemento desse vetor, armazenando um outro vetor.
Os conjuntos têm no máximo, 20 elementos. Imprima os dois conjuntos*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor_reais[20], vetor_quadrados[20];
    int controle;
    
    for( controle = 0; controle < 20; controle++) {
        printf("Digite um valor para vetor_reais[%d] = ",controle);
        scanf("%d",&vetor_reais[controle]);
    }

    for( controle = 0; controle < 20; controle++) {
        vetor_quadrados[controle] = vetor_reais[controle] * vetor_reais[controle];
    }


    printf("Os valores sao:\n");
    for( controle = 0; controle < 20; controle++) {
        printf("%d\n",vetor_reais[controle]);
    }

    printf("Os quadrados sao:\n");
    for( controle = 0; controle < 20; controle++) {
        printf("%d\n",vetor_quadrados[controle]);
    }


    system("pause");
    return 0;
}
