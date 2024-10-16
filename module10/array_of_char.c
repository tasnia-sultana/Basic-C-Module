#include<stdio.h>
int main()
{
    char a[5];
    int sz = sizeof(a) / sizeof(char);//To find out the size of a given char array/string
    // int sz = sizeof(a) / sizeof(int);//To find out the size of a given int array
    printf("%d",sz);
    //  printf("%d",sizeof(a));//To find out how many space (bite) a given array takes


    //To find out how many space (bite) a datatype takes
    // printf("%d ",sizeof(char));
    // printf("%d ",sizeof(int));
    // printf("%d ",sizeof(long long int ));
    // printf("%d ",sizeof(float));
    // printf("%d",sizeof(double));

//To find out how many space (bite) a given array takes
    // int a[5];
    // printf("%d",sizeof(a));
    
    return 0;
}