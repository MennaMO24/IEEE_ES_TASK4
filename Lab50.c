#include <stdio.h>

int max(int x,int y){
	int* Pnum1=&x;
	int* Pnum2=&y;
	
	if((*Pnum1) > (*Pnum2)){
		return (*Pnum1);
	}
	else if((*Pnum1) < (*Pnum2)){
		return (*Pnum2);
	}
	else {
		return 0;
	}
}
int main() {
	int num1;
	int num2;
	
	printf("Enter the first number: ");
	scanf("%i",&num1);
	printf("Enter the second number: ");
	scanf("%i",&num2);
	
	if(max(num1,num2)){
		printf("%i is the maximum number.",max(num1,num2));
	}
	else{
		printf("Two numbers are equal.");
	}
    return 0;
}
