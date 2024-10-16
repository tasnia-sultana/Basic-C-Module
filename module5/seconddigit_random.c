#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int digit = x / 100;
    int sec_digit = digit % 10;
    if(sec_digit % 2 == 1)
    {
        printf("ODD:%d",sec_digit);
    }
    else
        {
        printf("EVEN:%d",sec_digit);

        }
    return 0;
}
