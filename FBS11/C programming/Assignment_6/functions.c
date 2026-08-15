#include<stdio.h>
int add(int,int);
float areaC(float);
float getF(float);
void swap(int*,int*);
float getAvrage(int*,int);
void sqcu(int);
void Minut(int);
int getperimeter(int,int);
float getaTrangle(int,int);
float getper(int*,int);
int main(){
	int a[5]={60,60,30,60,99};
	
	printf("\n%2f",getAvrage(a,5));
	return 0;
}
int add(int a,int b){
	return a+b;
}
float areaC(float a)
{
	float area;
	area=3.14 *a*a;
	return area;
}
float getF(float c)
{
	float f;
	f=(c*9/5)+32;
	return f;
}
void swap(int *a,int *b)
{
	int temp;
	
    temp=*a;
    *a=*b;
    *b=temp;
}
float getAvrage(int*a,int n){
	int A=0,i=0;
	for(i;i<n;i++){
		A=A+a[i];
	}
	
	return (float)A/i;
}
void sqcu(int num)
{
 int square,cube;
 square=num*num;
 cube=num*num*num;
 printf("square= %d\n",square);
 printf("cube= %d\n",cube);
}
void Minut(int no)
{
	int hr,min;
	hr=no/60;
	min=no%60;
	printf("hours is%d and Minute is %d",hr,min);
}
int getperimeter(int l,int w)
{
	int perimeter;
	perimeter=2*(l+w);
	return perimeter;
}
float getaTrangle(int b,int h)
{
  	float area;
 	area=0.5*b*h;
 	return area;
 }
 float getper(int*a,int n)
 {
  	int sum=0,i=0;
  	float per;
 	for(i;i<n;i++){
 		sum=sum+a[i];
	 }
	 
	 per=(float)sum/(i*100);
	 
	 per=per*100;
	 return per;
 }
