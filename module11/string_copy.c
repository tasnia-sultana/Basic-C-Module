#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    scanf("%s %s",a,b);

    //by loop
    // for(int i=0;i<=strlen(b);i++)
    // {
    //     a[i]=b[i];
    // }


//To copy specific number of characters by loop
//   int i;
//     for(int i=0;i<=3;i++)
//     {
//         a[i]=b[i];
//     }
//    a[4]='\0';


    //by built in function
    strcpy(a,b);
    printf("%s %s",a,b);
    return 0;
}

