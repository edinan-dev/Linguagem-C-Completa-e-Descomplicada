/*Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo
e o ponto superior direito do retângulo. Cada ponto é definido por uma estrutura ponto, a qual
contém as posições X e Y. Faça o programa que declare e leia uma estrutura Retângulo e exiba a
área e o comprimento diagonal e o perímetro desse retângulo.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
    double x;
    double y;
};
struct retangulo {
    struct ponto ponto;
};

int main(){
    
    struct retangulo pse; //Ponto superior direito
    struct retangulo psd;// Ponto superior esquerdo

    //Ler as coordenadas digitadas pelo usuário.
    printf("Ponto Superior Esquerdo:\n");

    printf("Digite a coordenada X:");
    scanf("%lf",&pse.ponto.x);
    printf("Digite a coordenada Y:");
    scanf("%lf",&pse.ponto.y);

    printf("Ponto Superior Direito:\n");
    
    printf("Digite a coordenada X:");
    scanf("%lf",&psd.ponto.x);
    printf("Digite a coordenada Y:");
    scanf("%lf",&psd.ponto.y);

    //Verificar se com as coordenadas digitadas pelo usuário é possível fazer um retângulo.
    if((pse.ponto.x == psd.ponto.y)&&(pse.ponto.y == psd.ponto.x)){
        double lado1, lado2;

        //Calcula o tamanho de cada lado do retângulo
        lado1 = (pse.ponto.y)-(psd.ponto.x);
        lado2 = (psd.ponto.x)-(pse.ponto.y);


    }
    else{
        printf("Impossivel criar um retangulo com essas coordenadas.\nExecute novamente.\n");
    }

    system("pause");
    return 0;
}