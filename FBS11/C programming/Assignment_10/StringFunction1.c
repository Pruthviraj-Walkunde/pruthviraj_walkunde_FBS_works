#include<stdio.h>
#include<string.h>
int main(){
	char str[]="hello friends";
	char str1[50];
	printf("Lengtha of Given string is :%d",strlen(str));

	strncpy(str1,str,5);
	printf("\n%s",str1);
	strcpy(str1,str);
	printf("\n%s",str1);
	strcat(str1,str);
	printf("\n %s",str1);
	
}
