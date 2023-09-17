#include <stdio.h>
int main()
{
    int i=0,j,arr[5];
    int *ptr;
    ptr = &arr;
    
    printf("enter the number\n");
    while(i<5)
    { 
       scanf("%d",arr[i]);
       i++;
    }
    
    for (j=1; j <= 5; ++j)
        printf("Element at %d = %p\n", i,ptr);
        ptr++;
}