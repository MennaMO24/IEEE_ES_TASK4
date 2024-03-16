#include <stdio.h>

void swap(int* num1, int* num2) {
    int num = *num1;
    *num1 = *num2;
    *num2 = num;
}

int main() {
    int element1;
	int element2;
	int element3;

    printf("Input the value of 1st element: ");
    scanf("%i", &element1);
    printf("Input the value of 2nd element: ");
    scanf("%i", &element2);
    printf("Input the value of 3rd element: ");
    scanf("%i", &element3);

    printf("The value before swapping are:\n");
    printf("element 1 = %i\n", element1);
    printf("element 2 = %i\n", element2);
    printf("element 3 = %i\n", element3);

    swap(&element1, &element3);
    swap(&element2, &element3);

    printf("The value after swapping are:\n");
    printf("element 1 = %i\n", element1);
    printf("element 2 = %i\n", element2);
    printf("element 3 = %i\n", element3);

    return 0;
}
