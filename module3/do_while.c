#include<stdio.h>
int main()
{
    int i , n ;
    scanf("%d",&n);
    i = 100;
    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i <= n) ;

    return 0;
}