#include<stdio.h>
#include<string.h>
int main()
{
    char a[18];
    scanf("%s",&a);//it won't work for space
    printf("%s ",a);

    // char a[7] ="Rahat\0";
    // printf("%d",strlen(a));

    return 0;
}