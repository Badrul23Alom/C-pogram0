

//write a program that decorated 5 numbers ascending order with array;

#include<stdio.h>
int main()
{
    int num[5]= {2,3,8,5,4},i,j,a;
    printf("Array1: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",num[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(num[i]<num[j])
            {
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
    printf("\nArray2: ");
    for(j=0; j<5; j++)
    {
        printf("%d ",num[j]);
    }

    return 0;

}
