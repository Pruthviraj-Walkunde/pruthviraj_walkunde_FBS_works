#include<stdio.h>

void delEle(int*,int);
void disp(int*,int);
int main(){
	
	int a[5]={1,1,1,1,1};
//	delEle(a);
	int A=sizeof(a);
	disp(a,A);
	delEle(a,A);
	disp(a,A);
	
return 0;	
}
void delEle(int* a,int A){

	for(int i=0;i<(A/sizeof(int));i++){
		a[i]=0;
	}
}
void disp(int*a,int b){

	for(int i=0;i<b/sizeof(int);i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}