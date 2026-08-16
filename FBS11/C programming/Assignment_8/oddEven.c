#include<stdio.h>
int getodd(int*,int);
int geteven(int*,int);
int main(){
	int arr[11]={12,45,89,65,45,23,55,44,67,81,23};
	printf("%d\n",getodd(arr,11));
	printf("%d",geteven(arr,11));
}
int getodd(int*a,int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(a[i]%2!=0){
			count++;
		}
	}
	return count;
}
int geteven(int*a,int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(a[i]%2==0){
			count++;
		}
	}
	return count;
}