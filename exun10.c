#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = (int *)malloc(5 * sizeof(int));

    if (array == NULL) {
        fprintf(stderr, "Erro na alocação de memória\n");
        return 1;
    }

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", array + i); 
    }

    printf("O dobro de cada valor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(array + i) * 2); 
    }

    free(array);

    return 0;
}
