#include <stdio.h>

void incr(int *e)
{
    *e = *e + 1;
}

int main(){
    int a = 10;
    int* p = &a;

    printf("Address p of a %d \n", p);
    printf("size of a %d \n", sizeof(a));
    printf("p + 1 %d \n", p+1);
    printf("at p+1 val %d \n", *(p + 2));
    
    char* p0 = (char*) p;
    printf("size of char %d \n", sizeof(char));
    printf("address = %d , val = %d \n", p0,*p0);
    printf("address = %d , val = %d \n", p0+1,*(p0+1));
    
    int** q = &p;
    int*** r = &q;
    
    printf("*p : %d \n", *p);
    printf("*q %d \n", *q);
    printf("**q %d \n", **q);
    
    **q = 15;
    printf("x %d \n", a);
    
    **q = *p + 1;
    printf("%d \n", a);
    
    incr(&a);
    printf("%d \n", a);
    
    int A[] = {1,2,3,4,5};
    printf("%d \n", A);
    printf("%d \n", &A[0]);
    printf("%d \n", A[0]);
    printf("%d \n", *A);
    
    return 0;

}