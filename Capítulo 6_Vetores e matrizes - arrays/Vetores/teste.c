#include <stdio.h>

int main() {
    int vetor[10];
    int repetidos[10]; // vetor para armazenar os valores repetidos
    int contador = 0; // contador para controlar o número de repetidos encontrados

    // Lendo os valores do vetor
    printf("Digite os 10 valores do vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verificando por valores iguais
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                // Verificando se o valor já foi adicionado aos repetidos
                int repetido = 0;
                for (int k = 0; k < contador; k++) {
                    if (vetor[i] == repetidos[k]) {
                        repetido = 1;
                        break;
                    }
                }
                // Se o valor não foi adicionado ainda, adiciona
                if (!repetido) {
                    repetidos[contador] = vetor[i];
                    contador++;
                }
            }
        }
    }

    // Se existirem valores repetidos, os imprime na tela
    if (contador > 0) {
        printf("Valores repetidos no vetor:\n");
        for (int i = 0; i < contador; i++) {
            printf("%d\n", repetidos[i]);
        }
    } else {
        printf("Não existem valores repetidos no vetor.\n");
    }

    return 0;
}
