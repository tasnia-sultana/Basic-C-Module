#include<stdio.h>
int main()
{
    //output will be  1 2 3 4 (input 10)
    // int i,n;
    // scanf("%d",&n);
    // for(i=1;i<=n;i+=1)
    // {
    // if(i == 5)
    // {
    //   break;
    // }
    //     printf("%d\n",i);

    // }

//output will be  1 2 3 4 5 (input 10)
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
    printf("%d\n",i);

    if(i == 5)
    {
      break;
    }

    }
    return 0;
}