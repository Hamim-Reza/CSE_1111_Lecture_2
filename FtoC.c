#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature Fahrenheit:");
    scanf("%f",&f);
    c=((f-32)/9)*5;
    printf("Temperature in Celsius: %.2f",c);
    return 0;


}
