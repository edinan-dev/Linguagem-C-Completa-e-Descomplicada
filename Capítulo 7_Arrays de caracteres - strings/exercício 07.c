/*Faça um programa que leia uma string e imprima uma mensagem dizendo se 
ela é um palíndromo ou ou não. Um palíndromo é uma palavra quem tem a
propriedade de poder ser lida tabto da direita para a esquerda como da 
esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str_1[20], str_2[20];
    int i, j, contador, tamanho_palavra, tamanho_string, comparar;

    //Ler string//
    printf("Digite um palavra: ");
    fgets(str_1, 20, stdin);
    str_1[strcspn(str_1, "\n")] = '\0';

    tamanho_string = sizeof(str_1);
    tamanho_palavra = strlen(str_1);

    for(i = 0; i < tamanho_string; i++) {
        if(str_1[i] == '\0') {
            contador = i - 1;
            break;
        }
    }

    //Atribui os valores da string 2//
    for(i = 0, j = contador; i < tamanho_palavra; i++, j--) {
        str_2[j] = str_1[i];
    }
    str_2[tamanho_palavra] = '\0';

    comparar = strcmp(str_1, str_2);
    if(comparar == 0) {
        printf("A palavra %s e palindromo\n",str_1);
    }
    else{
        printf("A palavra %s nao e palindromo\n",str_1);
    }

    system("pause");
    return 0;
} 