#include<stdio.h>
int main()
{
//28.4
    int n=5,co;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<=i; k++)
        {
            if(k==0||i==0)
            {
                co=1;
            }
            else
                co = co*(i-k+1)/k;
            printf("%d ",co);
        }

        printf("\n");
    }
}