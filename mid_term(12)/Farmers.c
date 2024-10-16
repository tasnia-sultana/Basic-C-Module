#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int tot_days=(d*m1)/(m1+m2);
        int fewer_days=(tot_days-d);
        if(fewer_days<0)
        {
            printf("%d\n",-1*fewer_days);
        }
        else
        {
           printf("%d\n",fewer_days);

        }
    }
    return 0;
}