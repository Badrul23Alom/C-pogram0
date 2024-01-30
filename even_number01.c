
#include<stdio.h>
int main()
{
    int a[5]= {2,1,1,50,50},i;

    for(i=0; i<5; i++)
    {
       if(a[i]%2==0)
       {
       printf("%d ",a[i]);
       }
    }
    

    return 0;
}

    