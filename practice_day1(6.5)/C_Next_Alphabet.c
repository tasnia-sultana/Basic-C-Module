#include<stdio.h>
int main()
{
     char c;
    scanf("%c",&c);
    if(c>='a' && c<'z')
    {
        int letter = c + 1;
        printf("%c",letter);
    }
    else
    {
        printf("a");
    }
    return 0;
}