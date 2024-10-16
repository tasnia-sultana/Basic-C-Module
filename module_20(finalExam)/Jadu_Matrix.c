#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=0;
    if(n==m)
    {
        flag=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j || (i+j)==(n-1))
            {
                if(a[i][j]!=1)
                {
                    flag=0;
                }
            }
             else if(a[i][j]!=0)
                {
                    flag=0;
                }
            }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }

    return 0;
}
