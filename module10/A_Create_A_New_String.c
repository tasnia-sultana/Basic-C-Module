#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    char t[1001];
    scanf("%s %s",s,t);
    int lenS=strlen(s);
    int lenT=strlen(t);
    printf("%d %d\n",lenS,lenT);
    printf("%s %s",s,t);
    return 0;
}