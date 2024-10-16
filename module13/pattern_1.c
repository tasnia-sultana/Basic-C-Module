#include<stdio.h>
int main()
{
    int n,k=1;//k=1 because the value of k will be 1 only once...
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        // k=1;/after every line k will be 1
        for(int j=1;j<=k;j++)
        {
            // k=1;/after printing every star k will be 1
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}