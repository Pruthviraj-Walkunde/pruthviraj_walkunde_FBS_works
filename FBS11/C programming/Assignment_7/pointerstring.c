#include<stdio.h>;
int len(char*);

int main(){
	char arr[]="hello";
	int z=len(arr);
	printf("%d",z);
return 0;
}
int len(char*a){
	int i=0,count;
	while(a[i]!='\0'){
		i++;
	}
	return i;
}