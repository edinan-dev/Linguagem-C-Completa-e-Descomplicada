/*Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20], caracte_usr;
    int i, num_vogal = 0, tamanho;

    //Ler a string str//
    printf("Digite um a frase: ");
    gets(str);
    
    //Ler caractere//
    printf("Digite um caractere: ");
    scanf("%c",&caracte_usr);
   
   //Calcula a quantidade de vogais e substitui pelo caractere digitado pelo usuário.//
    tamanho = strlen(str);
    for(i = 0; i < tamanho; i++) {
        if((str[i] == 'A') || (str[i] == 'a') || (str[i] == 'E') || (str[i] == 'e') || (str[i] == 'I') || (str[i] == 'i') || (str[i] == 'O') || (str[i] == 'o') || (str[i] == 'U') || (str[i] == 'u')) {
            str[i] = caracte_usr;
            num_vogal++;
        }
    }

    printf("\n");

    //Imprime a nova string e o número de vogais//
    printf("Nova string: ");
    for(i = 0; i < tamanho; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
    printf("Numero de vogais: %d\n",num_vogal);

    system("pause");
    return 0;
} 