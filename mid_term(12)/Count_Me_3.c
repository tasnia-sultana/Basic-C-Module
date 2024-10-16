#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d\n",&test);
    for(int t=1;t<=test;t++)
    {
    char s[10001];
    scanf("%s",s);
    int cnt_cap=0,cnt_sml=0,cnt_dgt=0;
    for(int i=0;i<strlen(s);i++)
    {
       if(s[i]>='a' && s[i]<='z')
       {
        cnt_sml++;
       }
       if(s[i]>='A' && s[i]<='Z')
       {
        cnt_cap++;
       }
       if(s[i]>='0' && s[i]<='9')
       {
        cnt_dgt++;
       }
    }
    printf("%d %d %d\n",cnt_cap,cnt_sml,cnt_dgt);
    }
    return 0;
}