#include<stdio.h>
void sumarray(int*,int*,int*,int);
int main(){
	int arr[5]={12,56,87,34,32};
	int brr[5]={11,3,45,67,31};
	int crr[5];
	sumarray(crr,brr,arr,5);
}
void sumarray(int*a,int*b,int*c,int n){
	for(int i=0;i<5;i++){
		a[i]=b[i]+c[i];
		printf("%d ",a[i]);
	}
}