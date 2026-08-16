#include<stdio.h>
void alternate(int*,int);
int main(){
	int arr[10]={23,56,78,98,43,12,44,56,67,98};
	alternate(arr,10);
}
void alternate(int* arr,int n){
	int flag=0;
	for(int i=0;i<n;i++){
		if(flag==0){
			printf("%d ",arr[i]);
			flag=1;
			continue;
		}
		flag=0;
	}
}