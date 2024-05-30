/*Leia uma matriz de tamanho 10x3 com notas dos alunos em três provas.
Em senguida, calcule e escreva na tela o número de alunos cuja pior nota
foi a prova 1, o números de alunos cuja pior nota foi na prova 2 e o número
cuja pior nota foi na prova 3.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz_notas[10][3], vetor_notas[3], vetor_alunos[3];
    int i, j;
   

    //Ler os números da matriz//
    for(i = 0; i < 10; i++){
        for(j = 0; j < 3; j++){
            printf("Digite a nota do aluno [%d] na prova [%d]: ",i + 1, j + 1);
            scanf("%d",&matriz_notas[i][j]);
        }
    }
    printf("\n");
   

    //Exibe a matriz de notas//
    printf("Tabela de Notas");
    for(i = 0; i < 10; i++) {
        printf("Aluno %d",i + 1);
        printf("\n");
        for(j = 0; j < 3; j++) {
            printf("| Prova %d = %d pts |",j + 1,matriz_notas[i][j]);
        }
        printf("\n");
    }
    
    //Adiciona a primeira nota de cada prova para comparar com as demais//
    for(j = 0; j < 3; j++) {
        vetor_notas[j] = matriz_notas[0][j];
    }

    //Limpa o vetor de alunos
    for(j = 0; j < 3; j++) {
        vetor_alunos[j] = NULL;
    }

    //Retorna a pior nota de cada prova e o id do aluno//
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 3; j++) {
            if(j == 0) {
                if(matriz_notas[i][j] < vetor_notas[j]) {
                    vetor_notas[j] = matriz_notas[i][j];
                    vetor_alunos[j] = i;
                }
            }
            else{
                if(j == 1) {
                    if(matriz_notas[i][j] < vetor_notas[j]) {
                     vetor_notas[j] = matriz_notas[i][j];
                     vetor_alunos[j] = i;
                    }
                }
                else{
                    if(j == 2) {
                        if(matriz_notas[i][j] < vetor_notas[j]) {
                         vetor_notas[j] = matriz_notas[i][j];
                         vetor_alunos[j] = i;
                         }
                    }
                    else {
                        printf("error");
                        break;
                    }
                }
            }
        }
    }
    printf("\n");

    //Exibe a pior nota de cada prova e o ID do aluno//
    printf("RESULTADO\n");
    for(i = 0; i < 3; i++) {
        printf("Pior nota da prova %d: %d, ID do aluno: %d",i + 1, vetor_notas[i], vetor_alunos[i] + 1);
        printf("\n");
    }

    system("pause");
    return 0;
}