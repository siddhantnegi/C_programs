#include <stdio.h>

void sum(int *x, int *y);
int main()
{
    int a, b, sum = 0,diff=0,mul=0,div=0;
    int *pa = &a;
    int *pb = &b;
    printf("Enter two numbers to add\n");
    scanf("%d%d", pa, pb);

    sum = *pa + *pb;
    diff =abs(*pa) - *pb;
    mul=*pa * *pb;
    div=*pa/(*pb);

    printf("Addition = %d\n", sum);
    printf("Substraction = %d\n", diff);
    printf("Multiplication = %d\n", mul);
    printf("Division = %d", div);
    return 0;
}
