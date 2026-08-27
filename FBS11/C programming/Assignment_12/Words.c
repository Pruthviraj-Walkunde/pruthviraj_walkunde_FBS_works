#include<stdio.h>
int strwords(char*);
int main(){
	char str[100];
	printf("Enter a string: ");
	scanf(" %[^\n]", str);
	int i=strwords(str);
	printf("given sentanse has %d words",i);
	
}
int strwords(char*str){
	int i=0,count=1;
	while(str[i]!='\0'){
		if(str[i]==' '&&str[i+1]!='\0'){
			count++;
		}
		i++;
		
	}
	return count;
}