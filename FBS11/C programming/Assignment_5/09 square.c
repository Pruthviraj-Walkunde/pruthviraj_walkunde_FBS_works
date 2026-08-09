#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of squre:- ");
	scanf("%d",&n);
	for(int row=1;row<=n;row++)
	{
	  for(int col=1;col<=n;col++)
	  {
	   if(row==1||col==1||row==n||col==n)
	    {
						
						
			printf(" *");	
		}
	    
        
		else
	    {
		 printf("  ");
		}
	
	  } 
	  printf("\n");
	}
	
}