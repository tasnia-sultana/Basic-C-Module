#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    int cons=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o'&& s[i]!='u' )
        {
            cons++;
        }
        // else if(s[i]!='e')
        // {
        //     cons++;
        // }
        // else if(s[i]!='i')
        // {
        //     cons++;
        // }
        // else if(s[i]!='o')
        // {
        //     cons++;
        // }
        // else if(s[i]!='u')
        // {
        //     cons++;
        // }
    }
    printf("%d",cons);
    return 0;
}