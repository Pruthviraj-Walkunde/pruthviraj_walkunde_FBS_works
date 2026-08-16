#include<stdio.h>
void merge(int*,int*,int,int);
int main(){
	int a[10]={12,3,45,67,87};
	int b[5]={12,11,11,11,11};
	merge(a,b,5,5);
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
void merge(int* a,int*b,int n1,int n2){
	
	for(int i=0;i<n2;i++){
		a[n1+i]=b[i];
	}
}