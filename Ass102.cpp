/*2. Write a function to calculate simple interest. (TSRS)*/
#include<stdio.h>
int interest(int,int,int);
int main()
{
    int p,r,t,x;
    printf("Enter a principal ,rate  and Time:");
    scanf("%d %d %d",&p,&r,&t);
    x = interest(p,r,t);
    printf("Simple Interest is : %d",x);
    return 0;
}
int interest(int a,int b,int c)
{
    int y;
    y=a*b*c/100;
    return y;
}