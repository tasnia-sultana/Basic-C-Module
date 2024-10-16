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
 int cnt[101]={0};
 for(int i=0;i<n;i++)
 {
   int value = a[i];
   cnt[value]++;
 }
 for(int i=0;i<=100;i++)
 {
    if(cnt[i]!=0)
{
    printf("%d - %d\n",i,cnt[i]);
 }}

    return 0;
}

