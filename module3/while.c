#include<stdio.h>
int main()
{
    int i , n ;
    scanf("%d",&n);
    i = 10;
    while(i <= n) 
    {
        printf("%d\n",i);
        i++;//i = i+1 or i += 1
    }
    return 0;
}