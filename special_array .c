
#include<stdio.h>
int main()
{
    int a[5]= {2,1,1,50,50},i,j=0;

    for(i=0; i<5; i++)
    {
        ++j;
        if(a[j]!=a[i])
        {
        printf("%d ",a[i]);
        }
    }
    

    return 0;
}

