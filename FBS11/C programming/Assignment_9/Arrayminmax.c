#include<stdio.h>
#include <limits.h>
void arrEleRan(int*,int);
int main(){
	int arr[]={23,45,78,1,90,21,45};
	arrEleRan(arr,7);

}
void arrEleRan(int*arr,int n){
	int min=INT_MAX,max=INT_MIN;
	for(int i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
			max=arr[i];
		}
		
	}
	printf("Minimum number is :%d   \nMaximum number is :%d",min,max);
	
}