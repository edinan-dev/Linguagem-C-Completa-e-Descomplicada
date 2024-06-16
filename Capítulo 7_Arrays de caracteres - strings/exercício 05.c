#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20];
    int i, meio;
    int contador, tamanho;

    //Ler a string str//
    printf("Digite um a frase: ");
    gets(str);
    
    //criar contador//
    if((strlen(str) % 2) == 0) {
        contador = strlen(str)/2;
    }
    else{
        contador= ((strlen(str)+1)/2) - 1;
    }

    tamanho = strlen(str);

    //Faz a inversão dos caracteres na string//
    for(i = 0; i < contador; i++) {
        meio = str[i];
        str[i] = str[strlen(str)-(i+1)];
        str[strlen(str)-(i+1)] = meio;
    }

    //Imprime a string invertida na tela//
    printf("Frase invertida: ");
    for(i = 0; i < tamanho; i++) {
        printf("%c",str[i]);
    }

    printf("\n");

    system("pause");
    return 0;
} 