/*9. Write a function to check whether a given number contains a given digit or not. 
(TSRS)*/
#include<stdio.h>
int digit(int,int);
int main()
{
    int x,n;
    printf("Enter a Numbers:");
    scanf("%d",&x);
    printf("Enter a digit:");
    scanf("%d",&n);
    digit(x,n);
    return 0;

}
int digit(int y,int digit)
{
    int rem;
    while (y)
    {
        rem = y%10;
        if(rem==digit)
        printf("given digit are contain a number %d:",rem);
        y=y/10;
    }
    return 0;
}
