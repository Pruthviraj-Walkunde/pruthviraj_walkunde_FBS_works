#include<stdio.h>
void arrayRe(int*,int);
int main(){
	int arr[6]={9,55,61,23,6,1};
	arrayRe(arr,6);
	for(int i=0;i<6;i++){
		printf("%d ",arr[i]);
	}
}
void arrayRe(int* a,int size){
	int j=0,i=size-1,temp;
	while(j<i){
	
		
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i--;
			j++;
		
	}
}