/*Faça um programa que leia um vetor de 10 posições.
Verifique se existe valores iguais e os escreva na tela.*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    int vetor[10], repetidos[10];
    int i, x, y, z;
    int repetido, contador = 0;

    //Ler os valores do vetor//
    for(i = 0; i < 10; i++) {
        printf("Digite o valor de vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    //Comparar o valores//
    for(x = 0; x < 10; x++) {
        for(y = x +1; y < 11; y++) {
            if(vetor[x] == vetor[y]) {
                
                //Testar se o valor já foi repetido//
                repetido = 0;
                for(z = 0; z < contador; z++) {
                    if(vetor[x] == repetidos[z]) {
                        repetido = 1;
                        break;
                    }
                }

                //Adicionar se não foi repetido//
                if(repetido == 0) {
                    repetidos[contador] = vetor[x];
                        contador++;
                }
            }
        }
    }


    printf("Os valores repetido sao:\n");
    for(i = 1; i < contador; i++) {
        printf("%d\n",repetidos[i]);
    }

    system("pause");
    return 0;
}