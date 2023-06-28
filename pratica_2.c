#include <stdio.h>


int main(void){

    float var = 2.5;

    //Declaração de ponteiro

    float * ponteiro;

    ponteiro = &var;

    printf("Var = %.1f \nPonteiro = %p \n", var, ponteiro);

    return 0;
}