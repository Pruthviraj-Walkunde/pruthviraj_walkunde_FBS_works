#include<stdio.h>
void sortarray(int*,int);
int main(){
	int arr[5]={23,45,78,51,11};
	sortarray(arr,5);
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
}
void sortarray(int*a,int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}