/*Faça um programa para ler 10 números diferentes a serem armazenados
em um vetor. Os números deverão ser armazenados no vetor na ordem em 
que foran lidos, sendo que, caso o usuário digite um número que já foi
digitado, o programa deverá pedir a ele para digitar outro número.
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor,
verificando se existe entre os números que já foram fornecidos. Exiba 
na tela o vetor final que foi digitado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int repetidos[10];
    int num_usr, contador = 0, repetido;
    int i, z;

    //Adicionar Valores//
    for (i = 0; i <10; i++) {
        inicio:
        printf("Digite um valor de vetor[%d]: ",i);
        scanf("%d",&num_usr);


        //Testar se o valor foi repetido//
        repetido = 0;
        for(z = 0; z < contador; z++) {
            if(num_usr == repetidos[z]) {
                repetido = 1;
                break;
            }       
        }

        //Adicionar se não se o valor não for repetido//
        if(repetido == 0) {
            repetidos[contador] = num_usr;
            contador++;
        } 
        else {
            printf("Esse valor ja foi digitado. Tente novamente\n");
            goto inicio;
        }
    }
    
    //Exibir os valores na tela//
    printf("Os valores sao respectivamente:\n");
    for(i = 0; i < 10; i++) {
        printf("vetor[%d]=%d\n",i,repetidos[i]);
    }

    

    system("pause");
    return 0;
}