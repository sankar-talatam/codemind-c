#include<stdio.h>
int main()
{
    int n,m,i,lcm=1;
    scanf("%d%d",&m,&n);
    for(i=lcm;i<1000;i++){
        if(lcm%m==0 && lcm%n==0){
            break;
        }
        else{
            lcm++;
        }
    }
    printf("%d",lcm);
}