#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the day: ");
    scanf("%d",&a);
    b=a/365;
    a=a%365;
    c=a/7;
    a=a%7;
    d=a;
    printf("Year: %d Week: %d Days: %d",b,c,d);
    return 0;


}
