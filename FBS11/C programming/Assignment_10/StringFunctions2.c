#include<stdio.h>
#include<string.h>
int main(){
	char str[]="hello world";
	char str1[]="Hello";
	char str2[]="woreld";
	if(0==strcmp(str,str1)){
		printf("Both are equale");
	}
	else if(0<strcmp(str,str1)){
		printf("\n%s is greater",str);
	}else{
		printf("\n%s is smaller",str);
	}
	printf("\n%c ->%d",*strchr(str,'l'),strchr(str,'l'));
	printf("\n%c ->%d",*strrchr(str,'l'),strrchr(str,'l'));
	printf("\n%s",strstr(str,str2));
	
		}