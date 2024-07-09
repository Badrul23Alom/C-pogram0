#include <stdio.h>

int main() {
    int n;
    int fibo1=0;
    int fibo2=1;
    
    scanf("%d",&n);
    printf("%d%d",fibo1,fibo2);
    for(int i=1; i<=n; i++)
    {
    int nextf=fibo1+fibo2;
    fibo1=fibo2;
    fibo2=nextf;
     printf("%d",nextf); 
    }
    return 0;
}
