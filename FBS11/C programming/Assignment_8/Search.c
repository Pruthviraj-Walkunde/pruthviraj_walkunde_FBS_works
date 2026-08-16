#include<stdio.h>
int search(int*,int,int);
int main(){
	
	int arr[10]={34,56,29,77,89,23,55,12,33,98};
	int searc=34;
	if(search(arr,10,searc)==1){
		printf("Found");
	}
	else{
		printf("Not found");
	}
return 0;
}
int search(int*arr,int size,int search){

	for(int i=0;i<size;i++){
		if(arr[i]==search){
			return 1;
		}
	}
	return 0;
	}