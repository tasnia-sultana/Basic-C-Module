#include<stdio.h>
#include<string.h>

int is_palindrome(char *s,int l)
{
    int Palindrome=1;
    for(int i=0;i<l;i++)
    {
        if(s[i]!=s[l-1])
        {
            Palindrome=0;
        }
        l--;
    }
    if(Palindrome)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    char s[1001];
    scanf("%s",s);
    int lnt=strlen(s);
    int ans=is_palindrome(s,lnt);
    if(ans==1)
    {
      printf("Palindrome");
    }
    else
    {
      printf("Not Palindrome");
    }
    return 0;
}