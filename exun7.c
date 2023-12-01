#include <stdio.h>

void somar(int *A, int B){
    *A = *A + B;
}

void mostrar(int A, int B){
    printf("Soma de A + B dentro da varialvel A: %d", A);
    printf("\nVAlor de B: %d", B);
}

int main(){
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("DIgite o valor de B: ");
    scanf("%d", &B);
    somar(&A, B);
    mostrar(A, B);
    return 0;
}