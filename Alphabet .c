#include<stdio.h>
int main()
{
    char b;
    scanf("%c",&b);
    if((b>='a'&&b<='z')||(b>='A'&&b<='Z')){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
   

