#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;

    int *endereco;
    int *endereco2;

    endereco = &num1;
    endereco2 = &num2;

    if(*endereco > *endereco2){
        printf("O num1[%d] e o maior entre os dois", *endereco);
    }else{
        printf("O num2[%d] e o maior entre os dois", *endereco2);
    }
    return 0;
}
