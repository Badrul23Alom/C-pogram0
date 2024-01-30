
#include<stdio.h>
int main()
{
    int a[5]= {2,7,1,10,50},i;
    int se=10;
    for(i=0; i<5; i++)
    {
        if(a[i]==se)
        {
            printf("%d",se);
            printf("\n%d",i+1);
            return 0;
        }
    }
    printf("Not find");

    return 0;
}

