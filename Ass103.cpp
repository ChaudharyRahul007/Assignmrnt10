/*3. Write a function to check whether a given number is even or odd. Return 1 if the 
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int oddeven(int);
int main()
{
    int x,a;
    printf("Enter a number:");
    scanf("%d",x);
    oddeven(x);
    return 0;

}
int oddeven(int y)
{
    if(y%2==0)
    printf("Even Number:");
    else
    printf("Odd Number:");
}