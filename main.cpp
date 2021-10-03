#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 10;

    setlocale(LC_ALL,"");
    printf("o valor valor da variável A é: %d \n", a);
    printf("informe um valor inteiro: \n");
    scanf("%d", &a );
    printf("o valor de A mudou : %d \n", a);
    float b = 3.3;
    printf("o valor de B é: %f \n",b);
    printf("digite um valor quebrado:\n");
    scanf("%f", &b);
    printf("o valor de B mudou para: %f", b);


}