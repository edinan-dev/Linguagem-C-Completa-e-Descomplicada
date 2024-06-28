/*Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando se a segunda string está contida dentro da primeira.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str_1[20], str_2[20];
    int i = 0, j = 0;
    int encontrado = 0;

    //Ler string 01//
    printf("Digite a frase: ");
    fgets(str_1, 20, stdin);
    str_1[strcspn(str_1, "\n")] = '\0';

    //Ler string 02//
    printf("Digite um palavra: ");
    fgets(str_2, 20, stdin);
    str_2[strcspn(str_2, "\n")] = '\0';

    //Varrer a primeira string//
    while (str_1[i] != '\0') {
        while ((str_1[j] != '\0') && (str_1[i + j] == str_2[j])) {
            j++;
            if(str_2[j] == '\0') {
                encontrado = 1;
                break;
            }
        }
        if(encontrado) {
            break;
        }
        
        j = 0;
        i++;
    }

    if(encontrado == 1) {
        printf("String encontrada\n");
    }
    else {
        printf("String nao encontrada\n");
    }
    system("pause");
    return 0;
} 