#include<stdio.h>
void odd_even()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt_odd=0,cnt_even=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cnt_even++;
        }
        else
        {
            cnt_odd++;
        }
    }
    printf("%d %d",cnt_even,cnt_odd);
}
int main()
{
    odd_even();
    return 0;
}