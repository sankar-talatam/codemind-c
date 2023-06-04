/*perfect number is the number that is equal to sum of it's positive divisors excluding the number itself */
/*for example:
6 is a perfect number because it's factors 1,2 and 3 sum is equal to again 6
factors of 6 are 1,2,3
1+2+3=6 */

#include<stdio.h>
int main()
{
	int n;          // given number
	scanf("%d",&n); // reading the given number
	int i,rem,sum=0;// i is for the possible number that divides given number 
	                // rem is used when there is need of showing factors of a number      
                    // sum is used to add
                    
    for(i=1;i<n;i++) 
	{
		if(n%i==0)  // if endhuku vademu ante, i ane number asalu n ane number ki factor aithene ga manaki kavali.mallee okasari chadhuvu.
		{
			sum=sum+i; // kalupukuntoo povaali 
		}
		
    }
	if(sum==n) // ex: n=6 , sum= 1+2+3= 6
	printf("True");
	else
	printf("False"); 
	               
                     
                     
					  
}