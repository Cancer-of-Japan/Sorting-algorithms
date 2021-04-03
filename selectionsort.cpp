#include <stdio.h>
#include <math.h>

using namespace std;

void printArray(int arr[], int n);
void selectionSort(int arr[], int n);

int main(){
	int arr[] = {4, 3, 5, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Original...\n");
	printArray(arr, n);
	printf("Process begin...\n");
	selectionSort(arr, n);
	printf("Result...\n");
	printArray(arr, n);
	
	return 0;
}

void printArray(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void selectionSort(int arr[], int n){
	int i, min, j;
	for(i = 0; i < n-1; i++){
		min = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		printArray(arr, n);
		if(min != i){
			swap(arr[i], arr[min]);
		}
	}
}
