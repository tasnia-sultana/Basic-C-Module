#include<stdio.h>
#include<string.h>

int main(){
    char a[11],b[11];
    scanf("%s %s", &a, &b);
    int lenA = strlen(a), lenB = strlen(b);
    printf("%d %d\n",lenA,lenB);

    char concat[22];
    strcpy(concat, a);
    strcat(concat, b);
    printf("%s\n",concat);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n",a,b);

    return 0;
}