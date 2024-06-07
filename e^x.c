#include<stdio.h>
int main()
{
    int n,b,x;
    int a=1;
    float c=1.0;
    printf("Input of N: ");
    scanf("%d",&n);
    printf("Input X value: ");
    scanf("%d",&x);
    for(int i=1; i<=n; i++)
    {
        b=pow(x,i);
        a=a*i;
        c=c+(b*1.0/a);
    }
    printf("%f",c);
    return 0;
}