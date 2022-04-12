#include <stdio.h>

void printPermutations(int arr[], int size, int cid);
void printArr(int arr[], int size);
void swap(int* a, int* b);

int main() {

    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    printPermutations(arr, size, 0);

    return 0;
}

void printPermutations(int arr[], int size, int cid) {
    if(cid  >= size)
        printArr(arr, size);
    
    for(int i = cid ; i < size; i++) {
        swap(&arr[i], &arr[cid]);
        printPermutations(arr, size, cid+1);
        swap(&arr[i], &arr[cid]);
    }
}

void printArr(int arr[], int size) {
    for(int i = 0; i < size; i++)
        printf("%d%c", arr[i], (i == size-1) ? ' ':',');
    printf("\n");
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}