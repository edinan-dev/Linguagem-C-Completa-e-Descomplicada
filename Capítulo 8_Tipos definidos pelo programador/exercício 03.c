/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclada dois pontos e exiba a distância entre eles.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct coordenada {
    double x;
    double y;
};

int main(){
    struct coordenada ponto[2];
    double distancia;
    int i;

    //Ler as coordenadas e armazenar na estrutura usr do tipo coordenada.
    for(i=0; i<2; i++){
        printf("Para o ponto %d:\n",i+1);

        printf("Digite a coordenada X:");
        scanf("%lf",&ponto[i].x);
        printf("Digite a coordenada Y");
        scanf("%lf",&ponto[i].y);
    }
    

    //Calcular a distância entre (X,Y) e (0,0).
    distancia = sqrt(pow(ponto[0].x-ponto[1].x,2)+pow(ponto[0].y-ponto[1].y,2));

   //Imprime a distância na tela.
    printf("Distancia entre (%.1f,%.1f) e (%.1f,%.1f): %.1f\n", ponto[0].x, ponto[0].y, ponto[1].x, ponto[1].y, distancia);

    system("pause");
    return 0;
}