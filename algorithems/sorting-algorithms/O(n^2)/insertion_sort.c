
#include <stdio.h>

void insertion_sort(int arr[], int n);
void swap(int* a, int* b);

int main() {

    int arr[] = {10, 9, 4, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, size);

    for(int i = 0; i < size; i++)
        printf("%d%c", arr[i], (i==size-1) ? '\n':',');

    return 0;
}

void insertion_sort(int arr[], int n){
    int i, j;
    for(i = 1; i < n; i++) {
        j = i;
        while((j > 0) && (arr[j] < arr[j-1])) {
            swap(&arr[j], &arr[j-1]);
            j--;
        }
    }
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}