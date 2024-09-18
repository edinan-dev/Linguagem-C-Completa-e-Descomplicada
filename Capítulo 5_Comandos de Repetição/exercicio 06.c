/*Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem "FIM!" após a contagem.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int count_mun = 10;

    while (count_mun != -1) {
        printf("%d\n",count_mun);
        count_mun--;
    }
    printf("FIM");

    system("pause");
    return 0;//teste
}