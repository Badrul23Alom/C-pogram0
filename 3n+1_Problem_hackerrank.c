#include<stdio.h>
int main()
{
    int n;
    int x=0+1;
    scanf("%d",&n);
    for(int i=1; i>0; i++)
    {
        int b,c;

        if(n==1)
        {
            break;
        }
        if(n%2!=0)
        {
            b=n*3+1;
            n=b;
        }

        else
        {
            c=n/2;
            n=c;
        }
        x=x+1;

    }
    printf("%d\n",x);
    return 0;

}