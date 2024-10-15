#include<stdio.h>
int main()
{
    // //limitations of int is 10 to the power 9(1000000000)
    // int a = 1000000000;
    // printf("%d",a);

    // //limitations of long long int is 10 to the power 18
    // long long int  b = 100000000000000000;
    // printf("%lld",b);

// //limitations of float is 8digit without point sign
//     float c = 234.67489;
//     printf("%.4f",c);

// //limitations of double is 16 digit without point sign
//     double d = 234.6748928885767;
//     printf("%.13lf",d);

    double a = 22.123456789123456;
    printf("%.15lf",a);
    return 0;
}