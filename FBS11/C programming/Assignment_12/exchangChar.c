#include<stdio.h>
void exchang(char*);
int main(){
	char str[50];
	printf("Enter a String: ");
	scanf("%s",str);
	exchang(str);
	printf("%s",str);
	
}
void exchang(char* str){
	int i=0,temp=str[0];

	while(str[++i]!='\0');
	str[0]=str[i-1];
	str[i-1]=temp;
}