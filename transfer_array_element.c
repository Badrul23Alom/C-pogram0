#include<stdio.h>
int main()
{

    int a[20]= {3,4,2,6,8},i,b[20],n=5;
    printf("Array1: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0; i<n; i++)
    {
        b[i]=a[i];
    }
    printf("\nArray2: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}