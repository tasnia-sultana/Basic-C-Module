#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    int A[N];
    int posit_sum=0,negat_sum=0;
    for(i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++)
        {
          if(A[i]> 0)
            {
              posit_sum+=A[i];
            }
        }
        printf("%d ",posit_sum);
   for(i=0;i<N;i++)
     {
    if(A[i] < 0)
      {
        negat_sum+=A[i];
      }
     }
    printf("%d ",negat_sum);
    return 0;
    }
