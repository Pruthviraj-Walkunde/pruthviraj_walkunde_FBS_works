#include<stdio.h>
void blankSpace(char*);
void display(char*);
int main(){
	char str[50];
	printf("Enter a Sentance: ");
	scanf(" %[^\n]", str);

	blankSpace(str);
	display(str);
	
}
void blankSpace(char*str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==' '){
			str[i]='$';
		}
		i++;
	}
}
void display(char*str){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
}