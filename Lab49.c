#include <stdio.h>
int sum(int x,int y){
	int* Pnum1=&x;
	int* Pnum2=&y;
	int summ=(*Pnum1)+(*Pnum2);
	
	return summ;
}

int main() {
	int num1;
	int num2;
	
	printf("Enter the first number: ");
	scanf("%i",&num1);
	printf("Enter the second number: ");
	scanf("%i",&num2);
	
	printf("The sum of %i and %i is: %i",num1,num2,sum(num1,num2));
    return 0;
}