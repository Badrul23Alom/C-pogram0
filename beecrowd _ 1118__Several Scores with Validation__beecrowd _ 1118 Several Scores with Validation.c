#include<stdio.h>
int main()
{
    int i;
    for(i=1; i>0; i++)
    {
        double p,q;
        scanf("%lf",&p);
        if(p>10||p<0)
        {
            printf("nota invalida\n");
        }
        if((p>=0&&p<11)) {
            for(int i=1; i>0; i++)
            {

                scanf("%lf",&q);

                if(q<0||q>10)
                {
                    printf("nota invalida\n");
                    continue;
                }
                if((q>=0&&q<11))
                {
                    break;
                }
            }
        }
        if((p>=0&&p<11)&&((q>=0&&q<11)))
        {
            double r=(p+q)/2.0;
            int s,t=0,u=1;
            printf("media = %.2lf\n",r);
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&s);
            if(s==1)
            {
                continue;
            }
            if(s==2)
            {
                break;
            }
            if(s<1||s>2)
            {
                for(int i=1; i>0; i++)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d",&s);
                    if(s==1)
                    {
                        t=t+1;
                        break;
                    }
                    if(s==2)
                    {
                        u=u+1;
                        break;
                    }
                }
            }
            if(t==1)
            {
                continue;
            }
            if(u==2)
            {
                break;
            }
        }

    }
    return 0;
}