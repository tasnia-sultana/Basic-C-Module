#include<stdio.h>
int main()
{
   //wrong code
   // int a,b;
   // scanf("%d %d",&a,&b);
   // printf("%d%% %d%%",a,b);
   // one way
   // //taking input in char type variable
   int a,b;
   char p;
   scanf("%d%c %d%c",&a,&p,&b,&p);
   printf("%d%% %d%%",a,b);

   //  //another way taking input not in char type variable
   // int a,b;
   // scanf("%d%% %d%%",&a,&b);
   // printf("%d%% %d%%",a,b);
   return 0;
}