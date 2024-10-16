#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    // fgets(a,23,stdin);
    // a[21] = '\0';// to remove ENTER from 21 index(22nd position)
    printf("%s",a);

    // char a[18];
    // fgets(a,10,stdin);//This will print the only 10 character from the given input
    // printf("%s",a);
    return 0;
}