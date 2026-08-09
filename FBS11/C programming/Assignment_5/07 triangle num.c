#include<stdio.h>
void main()
{
	int k=1,i,j;
	for(i=1;i<=10;i++)
	 {
	 	for(j=1;j<=i;j++)
	 	 {
	 	 	printf("%d ",k);
	 	 	k++;
		  }
		  printf("\n");
	 }
}