#include <stdio.h>

int somar(int n1, int n2, int *dobroN1, int *dobroN2, int *soma){
    *dobroN1 = n1 * 2;
    *dobroN2 = n2 * 2;
    *soma = *dobroN1 + *dobroN2;
}

float mostrar(int n1, int n2, int dobroN1, int dobroN2, int soma){
    printf("Valor de A: %d", dobroN1);
    printf("\nValor de B: %d", dobroN2);
    printf("\nSoma: %d", soma);

}

int main(){
    int A, B, dobroA, dobroB, rSoma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);

    printf("Digite o primeiro valor: ");
    scanf("%d", &B);

    somar(A, B, &dobroA, &dobroB, &rSoma);
    mostrar(A, B, dobroA, dobroB, rSoma);
    return 0;
}