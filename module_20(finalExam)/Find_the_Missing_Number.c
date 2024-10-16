#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
      long long int m; 
      int a,b,c;
      scanf("%lld",&m);
      scanf("%d %d %d",&a,&b,&c);
      if(m%(a*b*c)==0)
      {
        printf("%lld",(m/(a*b*c)));
      }
      else
      {
        printf("-1");
      }
      printf("\n");
    }
   
    return 0;
}