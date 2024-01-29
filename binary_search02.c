
#include<stdio.h>
int main()
{
    int a[10]= {10,9,8,7,6,5,4,3,2,1},i;
    int se=8;
    int f1=0,l=10,middle;

    while(f1<=l)
    {

        middle=(f1+l)/2;

        if(a[middle]==se)
        {
            printf("%d\n",a[middle]);
            printf("%d",middle+1);
            return 0;
        }
        else if(se>a[middle])
        {
            l=middle-1;
        }
        else if(se<a[middle])
        {
            f1=middle+1;
        }

    }

    return 0;
}