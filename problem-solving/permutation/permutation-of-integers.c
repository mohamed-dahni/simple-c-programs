#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void printArr(int arr[], int size) {
    for(int i = 0; i < size; i++)
        printf("%i", arr[i]);
    printf("\n");
}
void printPermutations(int arr[], int size, int cid) {
    if(cid >= size-1) {
        printArr(arr, size);
        return;
    }

    for(int i = cid; i < size; i++) {
        swap(&arr[i], &arr[cid]);
        printPermutations(arr, size, cid+1);
        swap(&arr[i], &arr[cid]);
    }
}

int main() {

    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    printPermutations(arr, size, 0);

    return 0;
}