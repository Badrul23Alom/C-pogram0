#include<stdio.h>
int main()
{

    int a[20]= {3,4,2,6,8},i,n=5;
    printf("Array1: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\nArray reverse: ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }

    printf("\n\n");

    return 0;
}