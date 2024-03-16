#include <stdio.h>

void printArray(int* arr){
	printf("The elements you entered are :\n");
    for (int i = 0; i < 5; i++) {
        printf("element - %i : %i\n", i, *(arr + i));
    }
}

int main() {
    int arr[5];
	
	printf("Input 5 elements in the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("element - %i : ", i);
        scanf("%i", &arr[i]);
    }
	
	printArray(arr);
    return 0;
}