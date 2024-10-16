#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int cnt_T=0,cnt_P=0;
        for(int i=0;i<strlen(s);i++)
        {
          if(s[i]=='T')
          {
            cnt_T++;
          }
          else if(s[i]=='P')
          {
            cnt_P++;
          }
        }
        if(cnt_T>cnt_P)
        {
          printf("Tiger");
        }
        else if(cnt_T<cnt_P)
        {
            printf("Pathaan");
        }
        else
        {
          printf("Draw");
        }
    }
    return 0;
}