#include<stdio.h>
int main(){
	int arr[]={23,45,78,90,21,45};
	int min,max;
	for(int i=0;i<(sizeof(arr)/sizeof(int))-1;i++){
		if(arr[i]<arr[i+1]){
			min=arr[i];
		}
		if(arr[i]>arr[i+1]){
			max=arr[i];
		}
		
	}
	printf("Minimum number is :%d   \nMaximum number is :%d",min,max);
}