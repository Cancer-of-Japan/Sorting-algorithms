#include <iostream>

using namespace std;


void merge(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    
	//Divide original array to 2 
    for(int i = 0; i < n1; i++){
        L[i] = arr[l + i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = arr[m + 1 + j];
    }

    
    //i...initial index of 1st sub-arr
    int i = 0;
    //j...initial index of 2nd sub-arr
    int j = 0;
    //k...initial index of merged sub-arr
    int k = l;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
		else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
	
	//Copy the remaining elements of L[], if there are any
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
	
	//Copy the remaining elements of R[], if there are any
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l >= r){
        return;
    }
    int m = l + (r-1)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
}


void printArray(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

	printf("Original...\n");
	printArray(arr, n);
	
	printf("Process Begin...\n");
	mergeSort(arr, 0, n - 1);
	cout << "Done" << endl;
	printf("Result...\n");
    printArray(arr, n);
     
     return 0;
}





