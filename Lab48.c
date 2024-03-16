#include <stdio.h>

int main() {
	int num1;
	int num2;
	int* Pnum1=&num1;
	int* Pnum2=&num2;
	
	printf("Enter the first number: ");
	scanf("%i",&num1);
	printf("Enter the second number: ");
	scanf("%i",&num2);
	printf("The sum of the entered numbers is : %i",(*Pnum1)+(*Pnum2));
    return 0;
}