#include<stdio.h>
int main()
{
    float pi,h,r;
    pi=3.14;
    printf("enter the hight of cylinder\n");
    scanf("%f",&h);
    printf("enter the value or radius");
    scanf("%f",&r);
    float a=pi*r*r*h;
    printf("volume of cylinder %f",a);

}