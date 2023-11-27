#include <stdio.h>

int torcarConteudo(int *n1, int *n2){
    int trocar = *n1;

    *n1 = *n2;
    *n2 = trocar;
}

void mostrar(int n1, int n2){
    torcarConteudo(n1, n2);
    printf("Valor de A: %d", n1);
    printf("\nValor de B: %d", n2);
}

int main(){
    int num1, num2;

    printf("Digite o valor de A: ");
    scanf("%d", &num1);

    printf("Digite o valor de B: ");
    scanf("%d", &num2);
    torcarConteudo(num1, num2);
    mostrar(num1, num2);

    return 0;
}
