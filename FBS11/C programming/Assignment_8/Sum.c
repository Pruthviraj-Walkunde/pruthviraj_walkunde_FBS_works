#include<stdio.h>
int getsum(int*,int);
int main(){
	int arr[10]={23,4,567,89,33,33,43,62,70,76};
	int sum=getsum(arr,10);
	printf("%d",sum);
}
int getsum(int*arr,int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}