#include <stdio.h>
#include <stdlib.h>

void preencher(float *valores, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        valores[i] = i * 25.0;
    }
}

void mostrar(float *valores, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("\nValor: %.2f na posicao[%d] ", valores[i], i);
    }
}

int main() {
    int tamanho = 10;

    float *valores = (float *)malloc(tamanho * sizeof(float));

    if (valores == NULL) {
        printf("Erro na alocação de memória.");
        return 1;
    }

    preencher(valores, tamanho);
    mostrar(valores, tamanho);

    free(valores);

    return 0;
}
