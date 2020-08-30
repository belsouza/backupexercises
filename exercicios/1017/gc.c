//1017
#include <stdio.h>

int main(void){
    float th, v, ql;
    scanf("%f", &th);
    scanf("%f", &v);
    ql = (v * th) / 12;
    printf("%.3f\n", ql);
    return 0;
}
