#include<stdio.h>
int isprime(int);
int main(){
	int arr[10]={34,66,33,78,7,76,23,45,76,29};
	
	for(int i=0;i<10;i++){
		if(isprime(arr[i])){
			printf("%d ",arr[i]);
		}
	
	}
	
}
int isprime(int n){
	int i=2;
	while(i<n){
		if(n%i==0){
			return 0;
		}
		i++;
	}
	return 1;
}