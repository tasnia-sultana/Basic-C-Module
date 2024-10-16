#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int cnt[26]={0};
    for(int i=0;i<strlen(a);i++)
    {
        int value =a[i]-'a';
        cnt[value]++;
    }

//    //outout:0-4 1-1 2-1 3-1 4-1 

//    for(int i=0;i<26;i++)
//     {
//         if(cnt[i]!=0)
//     {
//         printf("%d-%d ",i,cnt[i]);
//     }
//     }

    // //output:a-4 b-1 c-1 d-1 e-1 
    // for(int i=0;i<26;i++)
    // {
    //     if(cnt[i]!=0)
    // {
    //     printf("%c-%d ",i+'a',cnt[i]);
    // }
    // }

//     //To print serially without printing a character twice
//    // output:a-4 b-1 c-1 z-1 d-1 e-1 
//     for(int i=0;i<strlen(a);i++)
//     {
//         int value =a[i]-'a';
//         if(cnt[value]!=0)
//         {
//         printf("%c-%d ",value+'a',cnt[value]);
//         }
//         cnt[value] = 0 ;
//     }

    //To print serially(one character can be printed twice)
    // //output:a-4 b-1 a-4 c-1 z-1 a-4 d-1 a-4 e-1 
    for(int i=0;i<strlen(a);i++)
    {
        int value =a[i]-'a';
        printf("%c-%d ",value+'a',cnt[value]);
        
    }
    
    return 0;
}