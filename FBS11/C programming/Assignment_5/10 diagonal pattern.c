#include<stdio.h>
void main()
{
	int row,col,n;
	printf("Enter size:- ");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
	  for(col=1;col<=n;col++)
	  {
	  	if(col==1||row==1||col==n||row==n||row==col)
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