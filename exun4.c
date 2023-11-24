#include <stdio.h>

void trocar(){
    
}

int main(){
    int num1;
    int num2;

    int *endereco;
    int *endereco2;

    endereco = &num1;
    endereco2 = &num2;

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