#include<stdio.h>
int main()
{
//    int i;
//    for(i=10;i>=1;i=i-1)
//    {
//     printf("%d\n",i);
//    }

// Quiz Question
int i,n;
scanf("%d",&n);
//we initialized from n-1 because in quiz question the loop was like below
//for(i = 0;i < n ;i++)
for(i=n-1;i>=0;i-=1)
{
    printf("%d\n",i);
}
   return 0;
}