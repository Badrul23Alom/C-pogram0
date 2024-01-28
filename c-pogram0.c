/*#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,temp;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a<c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b<c)
    {
        temp=b;
        b=c;
        c=temp;
    }
no
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(pow(a,2)==(pow(b,2))+(pow(c,2)))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    if(pow(a,2)>(pow(b,2)+pow(c,2)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(pow(a,2)<(pow(b,2)+pow(c,2)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b&&b==c&&a==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if(((a==b)&&(a!=c))||((a==c)&&(a!=b)) ||((b==c)&&(a!=b)))
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}*/
/*
#include<stdio.h>

int main()
{

    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int x=0;
    int y=0;
    int z=0;
    int x1=0;
    //even number
    if(a%2==0)
    {
        x=x+1;
    }
    if(b%2==0)
    {
        x=x+1;
    }

    if(c%2==0)
    {
        x=x+1;
    }

    if(d%2==0)
    {
        x=x+1;
    }

    if(e%2==0)
    {
        x=x+1;
    }

    //  odd number

    if(a%2!=0)
    {
        y=y+1;
    }
    if(b%2!=0)
    {
        y=y+1;
    }

    if(c%2!=0)
    {
        y=y+1;
    }

    if(d%2!=0)
    {
        y=y+1;
    }

    if(e%2!=0)
    {
        y=y+1;
    }

    //positive

    if(a>0)
    {
        z=z+1;
    }
    if(b>0)
    {
        z=z+1;
    }
    if(c>0)
    {
        z=z+1;
    }
    if(d>0)
    {
        z=z+1;
    }
    if(e>0)
    {
        z=z+1;
    }

    // negative

    if(a<0)
    {
        x1=x1+1;
    }
    if(b<0)
    {
        x1=x1+1;
    }
    if(c<0)
    {
        x1=x1+1;
    }
    if(d<0)
    {
        x1=x1+1;
    }
    if(e<0)
    {
        x1=x1+1;
    }

    printf("%d valor(es) par(es)\n",x);
    printf("%d valor(es) impar(es)\n",y);
    printf("%d valor(es) positivo(s)\n",z);
    printf("%d valor(es) negativo(s)\n",x1);


    return 0;
}
*
#include<stdio.h>
int main()
{
    int x,y,z=0;
    scanf("%d%d",&x,&y);

    if(x<y)
    {
        if(x%2!=0)
        {
            for(x=x+2; x<y; x=x+2)
            {
                z=z+x;
            }
        }
        else if(x%2==0)
        {
            for(x=x+1; x<y; x=x+2)
            {
                z=z+x;
            }
        }
    }


    else if(x>y)
    {
        if(y%2!=0)
        {
            for(y=y+2; y<x; y=y+2)
            {
                z=z+y;
            }
        }
        else if(y%2==0)
        {
            for(y=y+1; y<x; y=y+2)
            {
                z=z+y;
            }
        }
    }

    printf("%d\n",z);

    return 0;
}
/
#include <stdio.h>

int main()
{
    double x,a,b,c,d,e;
    scanf("%lf",&x);
    if(x>=0.00&&x<=2000.00)
    {
        printf("Isento\n");
    }
    else if(x>=2000.01&&x<=3000.00)
    {
        a=x-2000.00;
        // b=a*0.08;
        printf("R$ %.2lf\n",a*0.08);
    }
    else if(x>=3000.01&&x<=4500.00)
    {
        a=x-3000;
        b=a*0.18;
        c=x-2000;
        d=((c-a)*0.08)+b;
        printf("R$ %.2lf\n",d);

    }
    else if(x>4500)
    {
        a=x-4500;
        b=a*0.28;
        c=x-a;
        d=(c-3000)*0.18;
        e=b+d+(1000*0.08);
        printf("R$ %.2lf\n",e);


    }

    return 0;
}*/
/*
#include <stdio.h>
int main()
{

    float x=0;
    double a=1.0,b=2.0,c=3.0;

    while(x<=2.2)
    {

        if(x==0.0)
        {
            printf("I=%d J=%d\n",(int)x,(int)a);
            printf("I=%d J=%d\n",(int)x,(int)b);
            printf("I=%d J=%d\n",(int)x,(int)c);
        }
        else if(x==1.0)
        {
            printf("I=%d J=%d\n",(int)x,(int)a);
            printf("I=%d J=%d\n",(int)x,(int)b);
            printf("I=%d J=%d\n",(int)x,(int)c);
        }
        else if(x<=2.0)
        {
            printf("I=%.1f J=%.1lf\n",x,a);
            printf("I=%.1f J=%.1lf\n",x,b);
            printf("I=%.1f J=%.1lf\n",x,c);
        }
        else if(x<2.2)
        {
            printf("I=%d J=%d\n",(int)x,(int)a);
            printf("I=%d J=%d\n",(int)x,(int)b);
            printf("I=%d J=%d\n",(int)x,(int)c);
        }
        x=x+0.2;
        a=a+0.2;
        b=b+0.2;
        c=c+0.2;
     }
    return 0;
}*/



/*

#include<stdio.h>
int main()
{
    int i;
    for(i=1; i>0; i++)
    {
        int x,y,temp,z=0;
        scanf("%d%d",&x,&y);
        if(x==0||y==0)
        {
        break;
        }
        else if(x<0||y<0)
        {
        break;
        }
        else if(x>0&&y>0)
        {
            if(x>y)
            {
                temp=x;
                x=y;
                y=temp;
            }
            for(x; x<=y; x++)
            {
                printf("%d ",x);
                z=z+x;
            }
            printf("Sum=%d\n",z);
        }
    }
    return 0;
}
*/
/*

#include<stdio.h>
int main()
{
    while(1)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x==y)
        {
            break;
        }
        else if(x!=y)
        {
            if(x>y)
            {
                printf("Decrescente\n");
            }

            else
                printf("Crescente\n");
        }
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    while(1)
    {
        int x;
        scanf("%d",&x);
        if(x==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }

        else
            printf("Senha Invalida\n");

    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    while(1)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x==0||y==0)
        {
            break;
        }
        else if(x>0&&y>0)
        {
            printf("primeiro\n");
        }
        else if(x>0&&y<0)
        {
            printf("quarto\n");
        }
        else if(x<0&&y<0)
        {
            printf("terceiro\n");
        }
        else if(x<0&&y>0)
        {
            printf("segundo\n");
        }


    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(b==0)
        {
            printf("divisao impossivel\n");
        }
        else if(b!=0)
        {
            double c;
            c=(double) a/b;
            printf("%.1lf\n",c);
        }
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int i;
    double x,y,a,b=0,c=0,d,e=0,f;
    for(i=1; i>0; i++)
    {
        scanf("%lf",&x);
        if(x>=0&&x<=10)
        {
            b++;
            d=d+x;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(b==2)
        {
            break;
        }
        if(b==1&&c==1)
        {
            break;
        }
        scanf("%lf",&y);
        if(y>=0&&y<=10)
        {
            c++;
            e=e+y;
        }
        else
        {
            printf("nota invalida\n");
        }

        if(c==2)
        {
            break;
        }

        if(b==1&&c==1)
        {
            break;
        }
    }
    f=(d+e)/2;
    printf("media = %.2lf\n",f);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int x,y,temp,z=0;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    for(x; x<=y; x++)
    {
        if(x%13!=0)
        {
            z=z+x;
        }
    }

   printf("%d\n",z);

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        int a;
        scanf("%d",&a);
        if(a==0)
        {
            printf("NULL\n");
        }
        else
        {
            if(a>0&&a%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else if(a>0&&a%2!=0)
            {
                printf("ODD POSITIVE\n");

            }
            else if(a<0&&a%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else if(a<0&&a%2!=0)
            {
                printf("ODD NEGATIVE\n");

            }
        }

    }

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1; i<10000; i++)
    {

        if(i%N==2)
        {
            printf("%d\n",i);
        }

    }
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1; i<=10; i++)
    {

        printf("%d x %d = %d\n",i,N,N*i);

    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
		double a,b,c,d;
        scanf("%lf%lf%lf",&a,&b,&c);
        d=(a*2+b*3+c*5)/10;
        printf("%.1lf\n",d);
    }
    return 0;
}
    */

/*
#include<stdio.h>
int main()
{
int i,a,y=0,d;
for(i=1; i<=100; i++)
{

    scanf("%d",&a);
    if(a>y)
    {

        y=a;
        d=i;

    }
}
printf("%d\n",y);
printf("%d\n",d);

return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    int a,x,i,b=0,c=0,d=0,e;
    char ch,f;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d %c",&x,&ch);
        if('C'==ch)
        {
            b=b+x;
        }
        if('R'==ch)
        {
            c=c+x;
        }
        if('S'==ch)
        {
            d=d+x;
        }
    }
    e=b+c+d;
    f='%';
    printf("Total: %d cobaias\n",e);
    printf("Total de coelhos: %d\n",b);
    printf("Total de ratos: %d\n",c);
    printf("Total de sapos: %d\n",d);
    printf("Percentual de coelhos: %.2lf %c\n",(((double)b/e)*100.0),f);
    printf("Percentual de ratos: %.2lf %c\n",(((double)c/e)*100.0),f);
    printf("Percentual de sapos: %.2lf %c\n",(((double)d/e)*100.0),f);
    return 0;
}
    */

/*
#include <stdio.h>

int main()
{
    int i;
    double x,y,a,b=0,c=0,d,e=0,f;
    for(i=1; i>0; i++)
    {
        scanf("%lf",&x);
        if(x>=0&&x<=10)
        {
            b++;
            d=d+x;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(b==2)
        {
            break;
        }
        if(b==1&&c==1)
        {
            break;
        }
        scanf("%lf",&y);
        if(y>=0&&y<=10)
        {
            c++;
            e=e+y;
        }
        else
        {
            printf("nota invalida\n");
        }

        if(c==2)
        {
            break;
        }

        if(b==1&&c==1)
        {
            break;
        }
    }
    f=(d+e)/2;
    printf("media = %.2lf\n",f);



    return 0;
}

*/



//note solved
/*
#include<stdio.h>
int main()
{
    int x;
    int i;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        int a,b=0,c;
        scanf("%d",&a);
        for(i; i<=a; i++)
        {
            if(a%i==0)
            {
                b=b+i;
            }

        }
        if(b==1)
        {
            printf("valid");
        }
        if(b>1)
        {
            c=b-a;
            if(c==a)
                printf("valid");
            else
                printf("n valid");
        }
    }
    // c=b-a;
    // printf("%d",c);
    // printf("%d",b);

    //return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int a,b=0,c,j;
        scanf("%d",&a);
        for(j=1; j<=a; j++)
        {
            if(a%j==0)
            {
                b=b+j;

            }
        }

        if(b>1)
        {
            c=b-a;
            if(c==a)
            {
                printf("%d eh perfeito\n",a);
            }
            else
                printf("%d nao eh perfeito\n",a);
        }
        else
            printf("%d nao eh perfeito\n",a);

    }
    return 0;
}

*/

/*

#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        int b,j,n=0;
        scanf("%d",&b);
        if(b==1)
        {
            n++;
        }
        for(j=2; j<b; j++)
        {
            if(b%j==0)
            {
                n++;
                break;
            }
        }
        if(n==0)
        {
            printf("%d eh primo\n",b);
        }
        else if(n>0)
        {
            printf("%d nao eh primo\n",b);
            n=0;
        }
    }

    return 0;
}

*/

/*


#include<stdio.h>
int main()
{
    int i;
    for(i=1; i>0; i++)
    {
        int n,j,x=0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        if(n%2==0)
        {
            int a=n;
            for(n; n<=8+a; n=n+2)
            {
                x=x+n;
            }
        }



        if(n%2!=0)
        {
            int b=n+1;
            int a=b;
            for(b; b<=8+a; b=b+2)
            {
                x=x+b;
            }
        }
        printf("%d\n",x);

    }
    return 0;
}


*/

/*
#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        int n,j,x=0,y;
        scanf("%d",&n);
        scanf("%d",&y);



        if(n%2!=0)
        {
            int a=n;
            for(n; n<=(y-1)*2+a; n=n+2)
            {
                x=x+n;
            }
        }



        if(n%2==0)
        {
            int b=n+1;
            int a=b;
            for(b; b<=(y-1)*2+a; b=b+2)
            {
                x=x+b;
            }
        }
        printf("%d\n",x);

    }
    return 0;
}
  */
/*

#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
      if(n%i==0)
      {
          printf("%d\n",i);
      }
  }
  return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int i;
    double a,b=0;
    for(i=1.0; i<=100.0; i++)
    {
        a=1.0/i;
        b=b+a;
    }
    printf("%.2lf\n",b);
    return 0;
}

*/

/*

#include<stdio.h>
int main()
{
    int x,y,z=0,a=0,i;
    scanf("%d",&x);
    scanf("%d",&y);
    for(i=1; i<=y; i++)
    {
        printf("%d",i);
        ++z;
        ++a;
        if(z==1)
        {
            printf(" ");
        }
        if(z==2)
        {
            printf(" ");
            z=0;
        }
        if(a==x)
        {
            printf("\n");
            a=0;
        }
    }
    return 0;
}

*/

/*

#include<stdio.h>
int main()
{
    int x,y,z=0,a=0,i;
    scanf("%d",&x);
    scanf("%d",&y);
    for(i=1; i<=y; i++)
    {
        printf("%d",i);
        if(i%x==0)
        {
            printf("\n");
        }
        else
           printf("%d ",i);
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x<y)
    {

        for(x=x+1; x<y;x++)
        {

           if(x%5==2||x%5==3)
           {
             printf("%d\n",x);
           }
        }
    }


        if(x>y)
    {

        for(y=y+1; x>y;y++)
        {

           if(y%5==2||y%5==3)
           {
             printf("%d\n",y);
           }
        }
    }
    return 0;
}

*/

/*
#include<stdio.h>

int main()
{
  int n;

    scanf("%d", &n);


    if (n % 5 == 0) {
        // Output "Pancha" if evenly divisible
        printf("\"Pancha\"\n");
    } else {
        // Output "Dhurr!" otherwise
        printf("\"Dhurr!\"\n");
    }

    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%5==0)
    {
      printf("\"Pancha\"\n");
    }
    else
    {
      printf("\"Dhurr!\"\n");
    }
    return 0;
}
*/
/*

#include<stdio.h>

int main()
{
    int n;
    int x;
    int y=0;
    scanf("%d",&n);
    x=(n*(n-3))/2;
    if(x<0)
   {
        printf("%d\n",y);
    }
    else
    {
        printf("%d\n",x);
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int num[5]={2,3,4,5,8},i,j,a=0,num1[a];
    printf("Array1: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);
    }
    
    for(i=0;i<5;i++)
    {
        if(num[i]%2==0)
        {
          ++a;
          num1[i]=num[i];
        }
    }
    printf("\nArray2: ");
    for(j=0;j<a;j++)
    {
       printf("%d ",num1[j]);
    }
    
    return 0;
    
}
    