#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    // scanf("%s", a);
    // gets(a);
    fgets(a, 11, stdin);
        int sz = strlen(a);

    printf("%s",a);
    printf(" %d",sz);
    return 0;
}