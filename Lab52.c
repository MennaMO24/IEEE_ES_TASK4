#include <stdio.h>

void printArray(int* arr){
	int* large =arr;
    int* secondLarge =arr;
    
    for (int i = 1; i < 5; i++) {
        if (arr[i] > *large) {
            secondLarge = large;
            large = &arr[i];
        } 
		else if (arr[i] > *secondLarge && arr[i] != *large) {
            secondLarge = &arr[i];
        }
    }
    printf("The Second largest element in the array is: %i\n", *secondLarge);
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