#include<stdio.h>

int main()
{
    float a = 10.55, b = 20.55;
    printf("Before swaping x=%d y=%d\n", a,b);

    swap(&a, &b);

    
    printf("After swaping x=%d y=%d\n", a,b);

    return 0;
}

void swap(float *pa, float *pb)
{
    float temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
