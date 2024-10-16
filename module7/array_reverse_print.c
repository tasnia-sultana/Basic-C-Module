#include<stdio.h>
int main()
{
    // int n;
    // scanf("%d",&n);
    // int ar[n];
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&ar[i]);
    // }
    // for(int i=n-1;i>=0;i--)
    // {
    //     printf("%d\n",ar[i]);
    // }
    
    int n;
    scanf("%d",&n);
    int ar[n];
    int i;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
        for(int i=n-1;i>=0;i--)
    {
        if(ar[i]%2==0)
    {
        printf("%d\n",ar[i]);
    }}
    return 0;
}