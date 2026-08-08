#include<stdio.h>
void main()
{
	int n=123545,temp,sum=0,r1,r2;
	temp=n;
    
    	while(temp>0)
    	{
    	r1=temp%10;
    	temp=temp/10;
    	
        sum=sum+r1;
		 }
		
         printf("sum=%d",sum);
}