/*Leia uma matriz de tamanho 10x3 com notas dos alunos em três provas.
Em senguida, calcule e escreva na tela o número de alunos cuja pior nota
foi a prova 1, o números de alunos cuja pior nota foi na prova 2 e o número
cuja pior nota foi na prova 3.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz_notas[10][3], vetor[3];
    int i, j;
   

    //Ler os números da matriz//
    for(i = 0; i < 10; i++){
        for(j = 0; j < 3; j++){
            printf("Digite a nota do aluno [%d] na prova [%d]: ",i + 1, j + 1);
            scanf("%d",&matriz_notas[i][j]);
        }
    }

    //Imprimir na tela a matriz//
    printf("MATRIZ DAS NOTAS:\n");
     for(i = 0; i < 10; i++){
        printf("Aluno %d: \n",i + 1);
        for(j = 0; j < 3; j++) {
            printf("prova %d: %d pts  ",j + 1, matriz_notas[i][j]);
        }
        printf("\n");
    }
    printf("\n");


     for(i = 0, j = 0; j < 0; j++) {
        vetor[j] = matriz_notas[i][j];
    }

    //Calcular a pior nota de cada aluno//
    for(j = 0; j < 3; j++) {
        for(i = 0; i < 10; i++) {
            if(matriz_notas[i][j] < vetor[j]) {
                vetor[j] = matriz_notas[i][j];
            }
        }
    }
    printf("\n");

    for(i = 0; i < 3; i++) {
        printf("%d\n",vetor[i]);
    }
    system("pause");
    return 0;
}