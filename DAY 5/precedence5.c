#include<stdio.h>

int main(){
	
	int x=10;
	int y=5;
	int z=3;
	int a;
	
	
	a= (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x));
	
	printf("%d",a);
	
	
	return 0;
}
