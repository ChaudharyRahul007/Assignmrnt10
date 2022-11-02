 /*Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS)*/
#include<stdio.h>
int fact(int);
int main()
{
    int a,b,x;
    printf("Enter a  items :");
    scanf("%d",&a);
    printf("Enter a  items to selected a time :");
    scanf("%d",&b);
     x=fact(a)/fact(a-b);
    printf("%d",x);
    return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}

