#include <stdio.h>

int main(){

    int *endereco = malloc(sizeof(int));
    int *endereco2 = malloc(sizeof(int));

    printf("Digite um numero inteiro");
    scanf("%d", & *endereco);
    fflush(stdin);
    printf("Digite mais um numero inteiro");
    scanf("%d", & *endereco2);

    if(*endereco > *endereco2){ 
        printf("O num1[%d] e o maior entre os dois", *endereco);
    }else{
        printf("O num2[%d] e o maior entre os dois", *endereco2);
    }

    return 0;
}