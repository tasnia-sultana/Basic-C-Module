#include<stdio.h>
int main()
{
    int ar[5] = {10,20,30,40,50};
    // int ar[5] = {20};in this case the output will be 20 0 0 0 0
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}