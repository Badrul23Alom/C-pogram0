#include<stdio.h>
int main()
{
    //34;
    int n,num[100],max,mini;
    printf("Enter n number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    mini=num[0];
    for(int i=0; i<n; i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
        if(mini>num[i])
        {
            mini=num[i];
        }
    }
    printf("Max: %d\n",max);
    printf("Mini: %d\n",mini);
    return 0;
}