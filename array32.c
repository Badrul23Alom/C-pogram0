#include<stdio.h>
int main()
{
    int num[100];
    int n,x,z=0;
    // Array 32;
    printf("Input the n number :");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("check number input: ");
    scanf("%d",&x);
    for(int i=0; i<n; i++)
    {
        if(x==num[i])
        {
            z=1;
            break;
        }
    }
    if(z>0)
    {
        printf("Founded Number\n");
    }
    else if(z==0)
    {
        printf("Not found\n");
    }

    return 0;
}