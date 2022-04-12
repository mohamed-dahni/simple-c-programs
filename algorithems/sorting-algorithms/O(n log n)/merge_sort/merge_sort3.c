// preprocessor directive
#include <stdio.h>

#define SIZE 10

void merge_sort(int l, int r, int arr[], int aux[]);

int main() {

    int arr[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int aux[SIZE];

    merge_sort(0, SIZE-1, arr, aux);

    for(int i = 0; i < SIZE; i++)
        printf("%d%c", arr[i], (i == SIZE-1) ? '\n':',');

    return 0;
}

void merge_sort(int l, int r, int arr[], int aux[]) {
    // base case
    if(l >= r)    return;

    // calculate the middle index
    int mid = l + (r-l)/2;

    // the devide the arry by 2
    merge_sort(l, mid, arr, aux);
    merge_sort(mid+1, r, arr, aux);

    int pointer_left = l, pointer_right = mid+1;
    int k;

    for(k = l; k <= r; k++) {
        if(pointer_left > mid) { // pointer left has reached the limit
            aux[k] = arr[pointer_right];
            pointer_right++;
        } else if(pointer_right > r) { // pointer right has reached the limit 
            aux[k] = arr[pointer_left];
            pointer_left++;
        } else if(arr[pointer_left] < arr[pointer_right]) {  // pointer left has smaller element
            aux[k] = arr[pointer_left];
            pointer_left++;
        } else {  // pointer right has smaller element
            aux[k] = arr[pointer_right];
            pointer_right++;
        }
    }

    for(k = l; k <= r; k++) {
        arr[k] = aux[k]; // copy the auxaliary arrary to the original array
    }
}