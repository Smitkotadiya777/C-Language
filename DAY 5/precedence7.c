#include<stdio.h>

int main(){
	
	int x=10;
	int y=5;
	int z=3;
	int a;
	
	
	a=(x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("%d",a);
	
	
	return 0;
}
