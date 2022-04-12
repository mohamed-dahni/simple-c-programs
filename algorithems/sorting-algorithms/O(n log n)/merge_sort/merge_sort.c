#include <stdio.h>
#include <stdlib.h>

void merge_sort(int arr[], int aux[], int l, int r);

int main(int argc, char* argv[]) {

    if(argc != 2) {
        fprintf(stderr, "Invalid argument.\n");
        return 1;
    }

    FILE* in;
    if( !(in = fopen(argv[1], "r")) ) {
        fprintf(stderr, "A problem accurs while trying to open the file.\n");
        return 2;
    }

    int size = 1;
    int tmp;
    int *arr = malloc(sizeof(int)*size);
    fscanf(in, "%d\n", &arr[0]);

    while( fscanf(in, "%d\n", &tmp) == 1 ) {
        size++;
        arr = realloc(arr, sizeof(int)*size);
        arr[size-1] = tmp;
    }

    int aux[size];
    merge_sort(arr, aux, 0, size-1);

    for(int i = 0; i < size; i++)
        printf("%d\n", arr[i]);

    return 0;
}

void merge_sort(int arr[], int aux[], int l, int r) {
    // base case
    if(l >= r) return;

    // split the array into two halfs
    int mid = l +(r-l)/2;
    merge_sort(arr, aux, l, mid);
    merge_sort(arr, aux, mid+1, r);

    // merge the two halfs
    int left_pointer = l, right_pointer = mid+1;
    for(int k = l; k <= r; k++) {
        if(left_pointer > mid) { // left pointer reach its limit
            aux[k] = arr[right_pointer];
            right_pointer++;
        } else if(right_pointer > r) { // right pointer reach its limit
            aux[k] = arr[left_pointer];
            left_pointer++;
        } else if(arr[left_pointer] < arr[right_pointer]) { // left pointer has a smaller value
            aux[k] = arr[left_pointer];
            left_pointer++;
        } else { // right pointer has a smaller value
            aux[k] = arr[right_pointer];
            right_pointer++;
        }
    }

    for(int k = l; k <= r; k++)
        arr[k] = aux[k];
}