#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float c,tc,su;
    if(a<200)
    {
        c=a*1.20;
    }
    else if(a>=200 && a<400)
    {
        c=a*1.50;
    }
    else if(a>=400 && a<600)
    {
        c=a*1.80;
    }
    else
    {
     c=a*2.00;
    }
    if(c>=400)
    {
        su=0.15*c;
        tc=c+su;
        printf("%0.2f",tc);
    }
    else
    
    printf("%0.2f",c+100);
    
}