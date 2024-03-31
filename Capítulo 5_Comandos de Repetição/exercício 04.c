/*Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num = 3, var_control = 1;

    while (var_control <= 5) {
        printf("%d\n",num);
        num = num + 3;
        var_control++;
    }

    system("pause");
    return 0;
} 
