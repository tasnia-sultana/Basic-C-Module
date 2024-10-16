#include<stdio.h>
#include<string.h>

int main(){
    char s[101], t[101];
    scanf("%s", s);
    // int lenT = strlen(s);
    // for(int i = 0; i <= strlen(s); i++){
    //     t[i] = s[i];
    // }

    int lenT = strlen(s)/2;
    for(int i = 0; i <= lenT; i++){
        t[i] = s[i];
    }
    t[lenT+1] = '\0';

    // strcpy(t,s);
    printf("%s ",t);
    return 0;
}