#include<stdio.h>
int main()
{
    int a, b, c; 
    scanf("%d%d",&a, &b);
    a=b;
    b=c;
    c=a;
    printf("swap of a and b is %d  %d",a, b);
    return 0;
}

