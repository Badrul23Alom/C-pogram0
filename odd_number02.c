
#include<stdio.h>
int main()
{
    int a[5]= {2,1,1,50,50},b[5],i,c=0;

    for(i=0; i<5; i++)
    {
       if(a[i]%2!=0)
       {
       
       b[c]=a[i];
       ++c;
       }
    }
    for(i=0;i<c;i++)
    {
    printf("%d ",b[i]);
    }

    return 0;
}

    