/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num, var_control = 1, num2;

    printf("Type a number: ");
    scanf("%d",&num);
    num2 = num;
    
    while(var_control <= num2) {
       if (num%2 !=0) {
                printf("%d\n",num);
                var_control++;
        }
        num++;
    } 
   
    

    system("pause");
    return 0;
} 
