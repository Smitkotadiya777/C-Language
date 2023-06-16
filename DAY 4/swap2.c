#include<stdio.h>

int main(){
	
	int a;
	int b;
	
	printf("enter the value of a=");
	scanf("%d",&a);
	
	printf("enter the value of b=");
	scanf("%d",&b);
	
	a= a+b;
	b= a-b;
	a= a-b;
	
	printf("A : %d\n",a);
	printf("B : %d",b);
	
	
	
	return 0;
}
