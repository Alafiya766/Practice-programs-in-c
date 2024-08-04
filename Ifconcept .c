#include<stdio.h>
int main()
{
   char a;
   scanf("%c",&a);
   if(a>='a'&&a<='z'||a>='A'&&a<='Z')
   {
       printf("This is a alphabet");
   }
   else if(a>=0&&a<=9)
   {
       printf("This is a digit");
   }
   else{
       printf("This is a special character");
   }
   return 0;
}
   

