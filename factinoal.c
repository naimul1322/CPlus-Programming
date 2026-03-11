#include<stdio.h>
#define pi 3.1416
int main()
{
    double r, area;
    printf( "Enter the number :");
    scanf("%lf",&r);
    area=pi*r*r;
    printf("\nthe cricle of area is: %.3lf",area);
    return 0;
}
