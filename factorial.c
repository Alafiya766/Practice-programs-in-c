#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of given number is %d",fact);
    return 0;
}
