#include<stdio.h>
int main()
{
    int a[5]= {1,2,3,4,5};
    int b[5]= {1,2,3,4,5};
    int c[5],i,j;

    printf("Array1: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);

    }

    printf("\nArray2: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",b[i]);

    }

    printf("\nSum of Array: ");


    for(i=0; i<5; i++)
    {
        c[i]=a[i]+b[i];

        printf("%d ",c[i]);
    }


    return 0;
}