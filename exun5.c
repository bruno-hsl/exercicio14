#include <stdio.h>

int maiorValor(int *n1, int *n2){
    int m1 = *n1, m2 = *n2;

   if(m2 > m1){
    *n1 = m2;
    *n2 = m1;
   } else {
    *n1 = m1;
    *n2 = m2;
   }
}

float mostrar(int n1, int n2){
    printf("%d", n1);
    printf("\n%d", n2);
}

int main(){
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o primeiro valor: ");
    scanf("%d", &num2);

    maiorValor(&num1, &num2);
    mostrar(num1, num2);
    return 0;
}