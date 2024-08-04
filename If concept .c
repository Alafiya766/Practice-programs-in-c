#include<stdio.h>
int main()
{
    int mat,phy,chem,tot1,tot2;
    scanf("%d %d %d",&mat,&phy,&chem);
    tot1=mat+phy+chem;
    tot2=mat+phy;
    if(mat>=65&&phy>=55&&chem>=50&&tot1>=190||tot2>=140)
    {
        printf("The candidate is eligible for admission");
    }
    else{
        printf("The candidate is not eligible for admission");
    }
    return 0;
}
   

