/*Faça um programa que preencha um vetor com 10 números reais.
Em seguida, calcule e mostre na tela a quantidade de números 
negativos e a soma dos números positivos desse vetor*/

#include <stdio.h>
#include <stdlib.h>

int main(){

signed int vetor[10];
int contador, num_negativo, sum_positivo;

for(contador = 0, num_negativo = 0, sum_positivo = 0; contador < 10; contador++) {
    printf("Digite um valor: ");
    scanf("%d",&vetor[contador]);

    if(vetor[contador] > 0) {
        sum_positivo = sum_positivo + vetor[contador];
    }
    else{
        num_negativo++;
    }
}

printf("A soma dos numeros positivos e: %d\nA quantidade de numeros negativos e:%d\n",sum_positivo, num_negativo);


    system("pause");
    return 0;
}