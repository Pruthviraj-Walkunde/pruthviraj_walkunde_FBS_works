#include<stdio.h>
int main(){
	int arr[5]={12,56,87,34,32};
	int brr[5]={11,3,45,67,31};
	int crr[5];
	for(int i=0;i<5;i++){
		crr[i]=arr[i]+brr[i];
		printf("%d ",crr[i]);
	}
}