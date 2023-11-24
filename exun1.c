#include <stdio.h>
#include <stdlib.h>


int main(){
    int inteiro = 10;
    float real = 13.13;
    char string = 'A';

    int *x;
    float *y;
    char *z;
   

    x = &inteiro;
    y = &real;
    z = &string;

    printf("\n%d", inteiro);
    printf("\n%f", real);
    printf("\n%c", string);
    

    *x = 20;
    *y = 22.22;
    *z = 'B';
    
    printf("\n\n%d", inteiro);
    printf("\n%f", real);
    printf("\n%c", string);

    return 0;
}