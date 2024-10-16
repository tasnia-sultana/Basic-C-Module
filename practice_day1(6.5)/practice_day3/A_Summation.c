#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n)
    int ar[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
    }
        printf("%d",sum);

    // if(sum<0)
    // {
    //     printf("")
    // }
    return 0;
}