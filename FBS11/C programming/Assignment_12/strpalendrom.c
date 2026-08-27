#include<stdio.h>
int strpalendrom(char*,int);
void main(){
	char str[]="iciccci";
	int a=sizeof(str);
	
	if(strpalendrom(str,a-1)){
		printf("Palendrom");
	}
	else{
		printf("Not palendrom");
	}
	
}
int strpalendrom(char*str,int k){
	int i=0;
	while(i<k){
		if(str[i]==str[k-1]){
			printf("%c - %c\n",str[i],str[k-1]);
			i++;
			k--;
			continue;
		}
		return 0;
	}
	return 1;
}