#include <stdio.h>

void printArray(int* arr){
	int num;
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(arr[j]>arr[j+1]){
			num=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=num;
			}
		}
	}
	printf("The elements in the array after sorting :\n");
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