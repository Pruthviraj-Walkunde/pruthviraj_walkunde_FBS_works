#include<stdio.h>
void main()
{
	int n=27,i=2,sta=0;
	while(i<n)
	 {
	 	if(n%i==0)
	 	{
		 sta=1;
		 break;	 	 
	     }
	    i++;
	  }
	  if(sta==1)
	  	  printf("Not prime");
	  else{
	  
	  	printf("prime");}
}