#include<stdio.h>
int main()
{
//we are printing by superpower of string


    // char a[5] ={'R','a','h','a','t'};
    // char a[5] ="Rahat";//superpower of string

     // no guarantee
    // char a[6] = {'R','a','h','a','t'};

    //guarantee
    char a[6] = "Rahat";

    // int sz = sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    printf("%s",a);
    
    // char a[] = "Rahat\0";//The output will be 7 because Rahat= (5) + \0= (1) + \0 = 1(which is given by default) Total =7...
    // printf("%s",a);
    // printf("%d",sizeof(a));

    return 0;
}