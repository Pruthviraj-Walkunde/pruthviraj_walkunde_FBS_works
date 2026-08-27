#include<stdio.h>
int palendrom(char*);
void main(){
	char str[50];
	printf("Enter a string:");
	scanf("%s",str);
	printf("Given string is %s",palendrom(str)>0?"Not palendrom":"palendrom");
	
}
int palendrom(char*str){
	int i=strlen(str)-1,j=0;
	char temp;
	while(j<i){
		if(str[j]!=str[i])
			break;
		
		j++;
		i--;
	}
	if(j<i){
		return 1;
	}
	else{
		return 0;
	}
	
}