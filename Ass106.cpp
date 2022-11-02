/*Write a function to calculate the factorial of a number. (TSRS)*/
#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter a number to print a factorial:");
    scanf("%d",&a);

    printf("%d",fact(a));
    return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}