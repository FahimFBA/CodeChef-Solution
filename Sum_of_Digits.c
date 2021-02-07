#include<stdio.h>
int main()
{
  	int t;
   	scanf("%d",&t);
   	while(t--)
   	{
   		int n,sum=0; 
   		scanf("%d",&n);
   		while(n!=0) 
   		{
	   		sum+=n%10; // getting each digits and adding them to sum
            n/=10; // loop counter
   		}
    	printf("%d\n",sum);
    }
}