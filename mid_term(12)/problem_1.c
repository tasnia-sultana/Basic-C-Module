#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count_1=0,count_2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
          count_1++;
        }
        if(a[i]%3==0)
        {
            count_2++;
        }
        if(a[i]%2==0 && a[i]%3==0)
        {
          count_1++;
        }
    }
    printf("%d %d",count_1,count_2);
    
    return 0;
}
