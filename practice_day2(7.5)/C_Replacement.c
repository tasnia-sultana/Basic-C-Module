#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
    {
        scanf("%d",&ar[i]);
    }
    if(ar[i]>0)
    {
        printf("1 ");
    }  
    else if(ar[i]<0)
    {
        printf("2 ");
    }
    else
    {
        printf("0 ");
    }
    }

    return 0;
}