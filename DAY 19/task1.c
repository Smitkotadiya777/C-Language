#include<stdio.h>

	int main(){
		
		char Alphabet;
		
		printf("Enter a character: ");
		scanf("%c", &Alphabet);
		
		if(Alphabet >= 'A' && Alphabet <= 'Z'){
			
			Alphabet+=32;	
					
			printf("%c", Alphabet);
		}	
		
		return 0;
	}

	
