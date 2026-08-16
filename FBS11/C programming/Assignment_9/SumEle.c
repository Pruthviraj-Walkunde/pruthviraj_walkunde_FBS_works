#include<stdio.h>
int getsum(int*,int);
int main(){
	int arr[10]={23,4,51,98,33,33,56,62,70,23};

	printf("%d",getsum(arr,10));
}
int getsum(int*arr,int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}