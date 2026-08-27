#include<stdio.h>
void removChar(char*,int);
int main(){
	char str[50];
	printf("Enter a string:");
	scanf("%s",str);
	removChar(str,2);
	printf("%s",str);
	
}
void removChar(char* s,int in){

	while(s[in]!='\0'){
		
		s[in]=s[in+1];
		in++;
	}
}