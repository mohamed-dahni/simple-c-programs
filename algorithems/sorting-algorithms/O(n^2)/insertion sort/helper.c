#include <stdio.h>

void insertion_sort(int arr[], int arr_count) {
    int i, j, curr;
    for(i = 1; i < arr_count; i++) {

        curr = arr[i];
        j = i-1;
        while( j>=0 && arr[j]>curr ) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

void print_arr(int arr[], int arr_count) {
    for(int i = 0; i < arr_count; i++)
        printf("%d\n", arr[i]);
}