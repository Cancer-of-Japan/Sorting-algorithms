#include <stdio.h>
#include <math.h>

using namespace std;

void printArray(int arr[], int n);
void insertionSort(int arr[], int n);

int main(){
     int arr[] = {5, 4, 3, 2, 1};
     int n = sizeof(arr)/sizeof(arr[0]);
	printf("Original...\n");
	printArray(arr, n);
	printf("Process Begin...\n");
	insertionSort(arr, n);
	printf("Result...\n");
    printArray(arr, n);
     
     return 0;
}

void printArray(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n){
    int i, key, j;
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
     	printArray(arr, n);
    }
}
