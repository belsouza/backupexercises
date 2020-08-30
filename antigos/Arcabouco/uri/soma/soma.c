#include <stdio.h>

int soma( int a, int b)
{
    return(a + b);
}

int main(void){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("SOMA = %d\n", soma(a, b));
}