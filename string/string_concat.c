#include<stdio.h>
#include<string.h>

int main(){
    char s[101], t[101];
    scanf("%s %s", s, t);
    // int k = strlen(s);
    //For full string
    // for(int i = 0; i <= strlen(t); i++){
    //     s[k] = t[i];
    //     k++;
    // }

    
    int k = strlen(s);
    for(int i = 0; i <= strlen(t)/2; i++){
    s[k] = t[i];
    k++;
    }
    s[k] = '\0';//last position in k which will be after appending the half of the string from t.
    

    // strcat(s, t);
    printf("%s %s", s, t);
    return 0;
}