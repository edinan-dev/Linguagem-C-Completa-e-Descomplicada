/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa
e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados
da estrutura lida.*/

#include <stdio.h>
#include <string.h>

//Cria uma estrutura para armazenar dados do usuário.
struct cadastro {
    char nome[50];
    int idade;
    char endereco[50];
};

int main(){

    //declara uma estrutura do tipo cadastro.
    struct cadastro dados;

    //Ler o nome, idade e endereço do usuário e armazena na estrutura dados.
    printf("Digite o nome:");
    fgets(dados.nome, 50, stdin);
    dados.nome[strcspn(dados.nome, "\n")] = '\0'; //Remove o "\n" da string dados.nome e substitui por '\0'.

    printf("Digite a idade:");
    scanf("%d",&dados.idade);
    getchar(); //Limpa o buffer, removendo o "\n" deixado pelo scanf() ao ler o numero.

    printf("Digite o endereco:");
    fgets(dados.endereco, 50, stdin);
    dados.endereco[strcspn(dados.endereco, "\n")] = '\0'; //Remove o "\n" da string dados.endereço e substitui por '\0'.

    printf("Nome:%s\nIdade:%d\nEndereco:%s",dados.nome, dados.idade, dados.endereco);

    return 0;

}