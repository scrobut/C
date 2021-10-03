#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    //use acent
    
    setlocale(LC_ALL, "");
    int a = 10;
    
    printf("%d", a);
    scanf("%d", &a);

}