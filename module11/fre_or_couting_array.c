#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }


    // int zero = 0,one = 0,two = 0 ,three = 0;
    // for(int i=0;i<n;i++)
    // {
    //     if(a[i]==0)
    //     {
    //     zero++;
    //     }
    //       if(a[i]==1)
    //     {
    //     one++;
    //     }
    //       if(a[i]==2)
    //     {
    //     two++;
    //     }
    //       if(a[i]==3)
    //     {
    //     three++;
    //     }
    // }
    // printf(" 0 - %d\n",zero);
    // printf(" 1 - %d\n",one);
    // printf(" 2 - %d\n",two);
    // printf(" 3- %d",three);

//    int cnt[7]={0};
//    for(int i=0;i<n;i++)
//     {
//         if(a[i]==0)
//         {
//           cnt[0]++;
//         }
//           if(a[i]==1)
//         {
//         cnt[1]++;
//         }
//           if(a[i]==2)
//         {
//         cnt[2]++;
//         }
//           if(a[i]==3)
//         {
//         cnt[3]++;
//         }
//     }
//     printf(" 0 - %d\n",cnt[0]);
//     printf(" 1 - %d\n",cnt[1]);
//     printf(" 2 - %d\n",cnt[2]);
//     printf(" 3- %d",cnt[3]);

//  int cnt[7]={0};
//    for(int i=0;i<n;i++)
//     {
//        cnt [a[i]]++;
//     //    int value = a[i];
//     //    cnt[value]++;
//     }
//     for(int i=0;i<=3;i++)
//     {
//     printf("%d- %d\n",i,cnt[i]);
//     }

int cnt[101]={0};
   for(int i=0;i<n;i++)
    {
       cnt [a[i]]++;
    //    int value = a[i];
    //    cnt[value]++;
    }
    
    printf("%d- %d\n",100,cnt[100]);
    
    return 0;
}
