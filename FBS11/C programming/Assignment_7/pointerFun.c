#include<stdio.h>
void add(int*,int);
int main(){
	int a=10;
	add(&a,5);
	printf("%d",a);
}
void add(int* a,int A){
	*a=*a+A;
}