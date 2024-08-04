#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);
    x=n%10;
    y=n-x;
    printf("nearest multiple of 10:%d",y);
    return 0;
    
}


