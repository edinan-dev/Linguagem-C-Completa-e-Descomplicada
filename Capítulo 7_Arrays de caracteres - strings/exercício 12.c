/*Escreva um programa que leia o nome e o volar de uma determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule
o valor a ser pago à vista. Escreva o nome da mercadoria, o valor do desconto e o valor a ser
pago à vista.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str_1[20];
    double valor, desconto;

    //Ler nome da mercadoria//
    printf("Digite o nome da merdadoria: ");
    fgets(str_1, 20, stdin);
    str_1[strcspn(str_1, "\n")] = '\0';

    //Ler valor da mercadoria//
    printf("Digite o valor da mercadoria: ");
    scanf("%lf",&valor);
    
    //Calcular desconto de 10%//
    desconto = valor * 80/100;

    printf("%s:\nPreco total: %.2f\nPreco a vista: %.2f\n",str_1, valor, desconto);

    system("pause");
    return 0;
} 