#include<stdio.h>

int main(){
	
	int a=1;
	int n;
	
	printf("Enter value:");
	scanf("%d",&n);
	
	while(a<=n){
		
		printf("%d\n",a);
		a++;
	}
	
	return 0;
}
