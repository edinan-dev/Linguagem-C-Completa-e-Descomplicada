/*Leia uma matriz de tamanho 10x3 com notas dos alunos em três provas.
Em senguida, calcule e escreva na tela o número de alunos cuja pior nota
foi a prova 1, o números de alunos cuja pior nota foi na prova 2 e o número
cuja pior nota foi na prova 3.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz_notas[10][3];
    int i, j;
    int pior_nota_1, pior_nota_2, pior_nota_3;
    int id_aluno_1, id_aluno_2, id_aluno_3;

    //Ler os números da matriz//
    for(i = 0; i < 10; i++){
        for(j = 0; j < 3; j++){
            printf("Digite a nota do aluno [%d] na prova [%d]: ",i + 1, j + 1);
            scanf("%d",&matriz_notas[i][j]);
        }
    }

    //Calcular a pior de cada prova//
    pior_nota_1 = matriz_notas[0][0];
    pior_nota_2 = matriz_notas[0][1];
    pior_nota_3 = matriz_notas[0][2];

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 3; j++) {
            if(j == 0) {
                if(matriz_notas[i][j] < pior_nota_1) {
                    pior_nota_1 = matriz_notas[i][j];
                    id_aluno_1 = i;
                }
            } else {
                if(j == 1) {
                    if (matriz_notas[i][j] < pior_nota_2) {
                        pior_nota_2 = matriz_notas[i][j];
                        id_aluno_2 = i;
                    }
                } else {
                    if(j == 2) {
                        if(matriz_notas[i][j] < pior_nota_3) {
                            pior_nota_3 = matriz_notas[i][j];
                            id_aluno_3 = i;
                        }
                    } else {
                        printf("ERROR\n");
                    }
                }
            }
        }
    }


    //Imprimir na tela a matriz//
    printf("MATRIZ DAS NOTAS:\n");
     for(i = 0; i < 10; i++){
        printf("Aluno %d: \n",i + 1);
        for(j = 0; j < 3; j++) {
            printf("prova %d: %d  ",j + 1, matriz_notas[i][j]);
        }
    }
    printf("\n");

    //imprimir a pior nota de cada prova e o id do aluno//
    printf("A pior nota da prova 1 foi: %d, do aluno %d",pior_nota_1, id_aluno_1);
    printf("A pior nota da prova 2 foi: %d, do aluno %d",pior_nota_2, id_aluno_1);
    printf("A pior nota da prova 3 foi: %d, do aluno %d",pior_nota_3, id_aluno_1);

    system("pause");
    return 0;
}