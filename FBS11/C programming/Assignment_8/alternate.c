#include<stdio.h>
int main(){
	int arr[10]={23,56,78,98,43,12,44,56,67,98};
	int flag=0;
	for(int i=0;i<10;i++){
		if(flag==0){
			printf("%d ",arr[i]);
			flag=1;
			continue;
		}
		flag=0;
	}
}