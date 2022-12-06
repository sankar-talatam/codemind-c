#include<stdio.h>
int main()
{
    int bs;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        float da=(0.8)*bs;
        float hra=(0.2)*bs;
        float gs=da+hra+bs;
        printf("%.2f",gs);
    }
     if(bs<=20000 && bs>10000)
    {
        float da=(0.9)*bs;
        float hra=(0.25)*bs;
        float gs=da+hra+bs;
        printf("%.2f",gs);
    }
     if(bs>20000)
    {
        float da=(0.95)*bs;
        float hra=(0.3)*bs;
        float gs=da+hra+bs;
        printf("%.2f",gs);
    }
}