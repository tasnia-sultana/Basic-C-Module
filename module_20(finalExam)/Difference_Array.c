#include<stdio.h>
#include<stdlib.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            b[i]=a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(b[i]>b[j])
                {
                    int tmp=b[i];
                    b[i]=b[j];
                    b[j]=tmp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            c[i]=abs(a[i]-b[i]);
            printf("%d ",c[i]);
        }
        printf("\n");

    }
    return 0;
}