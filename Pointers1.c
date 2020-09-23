#include <stdio.h>

int main(){
    int a;
    int *p;
    p = &a;
    printf("%d \n", p);
    printf("%d \n", *p);
    printf("%d \n", &a);
    *p = 12;
    printf("%d \n", a);
    printf("%d \n", *p);
    int b = 20;
    *p = b;
    printf("%d \n", a);
    printf("%d \n", &b);
    printf("%d \n", p);
    return 0;
}