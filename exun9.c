#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3;
    int colunas = 3;

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i * colunas + j;
            printf("Endereço de matriz[%d][%d]: %p\n", i, j, (void *)&matriz[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
