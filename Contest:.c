#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&x,&a,&b);
    c=a+b*2;
    if(c>=x)
    printf("Qualify");
    else
    printf("Not Qualify");
}