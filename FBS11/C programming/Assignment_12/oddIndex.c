#include<stdio.h>
void removeoddChar(char*);
int main(){
	char str[50];
	printf("Enter a String: ");
	scanf("%s",str);
	removeoddChar(str);
	printf("%s",str);
	
}
void removeoddChar(char*str){
	int i=0,j=0;
	while(str[i]!='\0'){
		if(i%2==0){
		
			str[j]=str[i];
			j++;
		}
		i++;
	}
	str[j]='\0';
}