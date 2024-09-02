/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida seguida, declare e leia do teclado um ponto e exiba a distancia dele até a origem
das coordenadas, isto é, a posição (0,0)*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct coordenada {
    double x;
    double y;
};

int main(){

    struct coordenada usr;
    double distancia;
    //Ler as coordenadas e armazenar na estrutura usr do tipo coordenada.
    printf("Digite a coordenada X:");
    scanf("%lf",&usr.x);

    printf("Digite a coordenada Y:");
    scanf("%lf",&usr.y);

    //Calcular a distância entre (X,Y) e (0,0).
    distancia = sqrt(usr.x*usr.x + usr.y*usr.y);

    //Imprime a distância na tela.
    printf("Distancia entre (%.2f,%.2f) e (0,0): %.2f\n",usr.x, usr.y, distancia);
    system("pause");
    return 0;
}