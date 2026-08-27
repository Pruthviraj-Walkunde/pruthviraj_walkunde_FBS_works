#include<stdio.h>
int vowels(char*);
int main(){
	char str[50];
	printf("Enter a String: ");
	scanf("%s",str);
	int i=vowels(str);
	printf("Given string has %d vowels",i);
	
}
int vowels(char*str){
	int i=0,count=0;
	while(str[i]!='\0'){
		  if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
           count++;
           
           i++;
	}
	return count;
}