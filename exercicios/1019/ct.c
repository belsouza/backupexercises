//1017
#include <stdio.h>

int get( int n ){

    if(n > 60){
        
        return get(n % 60);
    }
    else
    {
        return n % 60;
    }
    
}

int main(void){
    int n, ss, mm, hh;
    scanf("%d", &n);
    ss = get(n);
    mm = get(n / 60);
    hh = get(n / 3600);
    printf("%d:%d:%d\n",hh, mm, ss);    
    return 0;
}
