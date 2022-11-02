/*5. Write a function to print first N odd natural numbers. (TSRN)*/
#include<stdio.h>
void num(int);
int main()
{
    int x;
    printf("Enter a  odd natural number to print:");
    scanf("%d",&x);
    num(x);
    return 0;

}
void num(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d\n",2*i-1);
    }
}