#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helper.h"

int main() {

    int arr[1000000000];
    int arr_count = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < arr_count; i++) {
        arr[i] = rand() % 100;
    }

    insertion_sort(arr, arr_count);
    print_arr(arr, arr_count);

    return EXIT_SUCCESS;
}
