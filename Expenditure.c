#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x-y>30*y)
    printf("YES");
    else
    printf("NO");
}