#include<stdio.h>
int main()
{
    int num[100];
    int n;
    // Array 30;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}