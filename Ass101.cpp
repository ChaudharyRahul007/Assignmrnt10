/*1. Write a function to calculate the area of a circle. (TSRS)*/
#include<stdio.h>
float area(float);
int main()
{  float x,b;
printf("Enter a number to calculate the area of a circle:");
scanf("%f",&b);
    x=area(b);
    printf("Area of a circle:%f",x);
    return 0;

}
float area(float r)
{
    float a;
    a= 3.14*r*r;
    return a;
}
