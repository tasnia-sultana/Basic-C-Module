#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    //it counts without null
    scanf("%s",a);
    // gets(a);

    // fgets(a,100,stdin);//it counts with null
    int st = strlen(a);
    printf("%d\n",st);
    return 0;
}